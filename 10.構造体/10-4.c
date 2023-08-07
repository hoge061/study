#include <stdio.h>
// struct Result
// {
//     char name[50];
//     int score;
//     char hyoka;
// };

// void kansu1(struct Result kou){
//     if(kou.score >= 80){
//         kou.hyoka = 'A';
//     }else if(kou.score >= 70){
//         kou.hyoka = 'B';
//     }else if(kou.score >= 60){
//         kou.hyoka = 'C';
//     }else{
//         kou.hyoka = 'D';
//     }
// }

// void main(){
//     struct Result kou;
//     printf("名前は？");
//     scanf("%s",&kou.name);
//     printf("得点は？");
//     scanf("%d",&kou.score);
//     kansu1(kou);
//     printf("%c、%d点、成績%c",kou.name,kou.score,kou.hyoka);

// }

struct EXAMRESULTS
{
    char    name[50];    // 名前
    int     score;       // 得点
    char    result;      // 成績
};

void SetResult( struct EXAMRESULTS* pExRes )
{
    if( pExRes->score >= 80 )
        pExRes->result = 'A';
    else if( pExRes->score >= 70 )
        pExRes->result = 'B';
    else if( pExRes->score >= 60 )
        pExRes->result = 'C';
    else
        pExRes->result = 'D';
}

void main( void )
{
    struct EXAMRESULTS exres;

    printf( "名前は？\n" );
    scanf( "%s", exres.name );
    printf( "得点は？\n" );
    scanf( "%d", &exres.score );

    SetResult( &exres );

    printf( "%s、%d点、成績 %c\n", exres.name, exres.score, exres.result );
}