// Function: FUN_00c70850
// Address: 00c70850
// Size: 590 bytes
// Class: GNString


undefined8 FUN_00c70850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 in_EDX;
  undefined8 *unaff_RSI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  
  switch(in_EDX) {
  case 0x2a:
    uVar4 = FUN_00c739b0();
    goto LAB_00c70a8f;
  default:
    FUN_00e82730();
    ___bzero();
    return 0;
  case 0x43:
    uVar4 = FUN_00c72290();
    goto LAB_00c70a8f;
  case 0x45:
    FUN_00c73430();
    uVar3 = extraout_XMM0_Da;
    uVar5 = extraout_XMM0_Db;
    goto LAB_00c70930;
  case 0x49:
    uVar3 = FUN_00c716c0();
    goto LAB_00c70a58;
  case 0x50:
    FUN_00c72990();
    uVar3 = extraout_XMM0_Da_00;
    uVar5 = extraout_XMM0_Db_00;
    goto LAB_00c7094f;
  case 0x52:
    FUN_00c73090();
    uVar3 = extraout_XMM0_Da_01;
    uVar5 = extraout_XMM0_Db_01;
LAB_00c70930:
    *unaff_RSI = CONCAT44(uVar5,uVar3);
    unaff_RSI[1] = param_2;
    break;
  case 0x53:
    FUN_00c72d10();
    uVar3 = extraout_XMM0_Da_02;
    uVar5 = extraout_XMM0_Db_02;
LAB_00c7094f:
    *unaff_RSI = CONCAT44(uVar5,uVar3);
    break;
  case 0x55:
    uVar2 = FUN_00c71260();
    *(undefined2 *)unaff_RSI = uVar2;
    break;
  case 0x5e:
    uVar4 = FUN_00c737d0();
    goto LAB_00c70a8f;
  case 0x62:
    uVar1 = FUN_00c70bc0();
    goto LAB_00c709d1;
  case 99:
    uVar1 = FUN_00c71080(&switchD_00c70875::switchdataD_00c70aa0,(char)in_EDX,param_3,param_4,0);
LAB_00c709d1:
    *(undefined1 *)unaff_RSI = uVar1;
    break;
  case 100:
    FUN_00c71ff0();
    *unaff_RSI = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
    break;
  case 0x65:
    goto LAB_00c70a53;
  case 0x66:
    FUN_00c71d60();
    *(undefined4 *)unaff_RSI = extraout_XMM0_Da_04;
    break;
  case 0x69:
LAB_00c70a53:
    uVar3 = FUN_00c71440();
LAB_00c70a58:
    *(undefined4 *)unaff_RSI = uVar3;
    break;
  case 0x6c:
    uVar4 = FUN_00c71940();
    goto LAB_00c70a8f;
  case 0x71:
    uVar4 = FUN_00c72610();
LAB_00c70a8f:
    *unaff_RSI = uVar4;
  }
  return 1;
}


