//Progamming Game AI by Example, Mat Buckland
enum StateType{RunAway, Patrol, Attack};

void Agent::UpdateState(StateType currentState)
{
    
    switch(CurrentState)
    {
        case state_RunAway;
            EvadeEnemy();
            if(Safe())
            {
                ChangeState(state_Patrol);
            }
            break;
        case state_Patrol:
            FollowPatrolPath();
            if(Threatened())
            {
                if(StrongerThanEnemy())
                {
                    ChangeState(state_Attack);
                }
                else
                {
                    ChangeState(state_RunAway);
                }
            }
            break;
        case state_Attack:
            if (WeakerThanEnemy())
            {
                ChangeState(State_RunAway);
            }
            else
            {
                BashEnemyOverhead();
            }
            break;
    }//end switch
}