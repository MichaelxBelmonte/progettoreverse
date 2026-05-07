// Function: FUN_012cf0c0
// Address: 012cf0c0
// Size: 1021 bytes
// Class: MULSSGenerator


void FUN_012cf0c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  bool bVar6;
  undefined8 uVar7;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01f27fe0();
  if (local_40 == 0) {
    DAT_028ac879 = '\0';
  }
  else {
    FUN_01f27fe0();
    cVar1 = (**(code **)(*local_80 + 0x450))();
    if (cVar1 == '\0') {
      DAT_028ac879 = '\0';
    }
    else {
      uVar7 = FUN_00d6f370();
      lVar5 = DAT_027bedc8;
      if (DAT_027bedc8 != 0) {
        uVar7 = FUN_00d50b00();
      }
      DAT_028ac879 = FUN_00d70f90(uVar7,1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (((DAT_028ac879 != '\0') && (iVar2 = FUN_00da6b30(), 2 < iVar2)) &&
     ((DAT_028ac868 == (undefined8 *)0x0 || (DAT_028ac871 == '\0')))) {
    FUN_00e8cb50();
    if (DAT_028ac868 == (undefined8 *)0x0) {
      iVar3 = FUN_00da6b30();
      iVar2 = 0x10;
      if (iVar3 < 0x13) {
        iVar2 = iVar3 + -2;
      }
      if (iVar2 < 2) {
        iVar2 = FUN_00da6b30();
        iVar2 = 2 - (uint)(iVar2 == 1);
      }
      if ((((longlong *)*unaff_RDI != (longlong *)0x0) &&
          (iVar3 = (**(code **)(*(longlong *)*unaff_RDI + 0x378))(), iVar3 != 0)) &&
         (iVar2 = 0x10, iVar3 < 0x10)) {
        iVar2 = iVar3;
      }
      DAT_028ac878 = 0;
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      bVar6 = DAT_028ac868 == (undefined8 *)0x0;
      DAT_028ac868 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028ac868 != (undefined8 *)0x0)) && (DAT_028ac870 == '\0')
         ) {
        DAT_028ac870 = '\x01';
        FUN_00e8cb90();
      }
      FUN_012cf680();
      lVar5 = DAT_028ac848;
      if (DAT_028ac848 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        bVar6 = DAT_028ac848 != 0;
        DAT_028ac848 = lVar5;
        if (bVar6) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_028ac850 == '\0')) {
        DAT_028ac850 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02581c90;
      (*DAT_02581ca8)();
      bVar6 = DAT_028ac858 == (undefined8 *)0x0;
      DAT_028ac858 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028ac858 != (undefined8 *)0x0)) && (DAT_028ac860 == '\0')
         ) {
        DAT_028ac860 = '\x01';
        FUN_00e8cb90();
      }
      if (0 < iVar2) {
        do {
          local_50 = 0;
          local_48 = '\0';
          FUN_00da62d0(param_1,&local_50);
          lVar5 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          local_40 = lVar5;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      DAT_028ac871 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ac871 = '\x01';
      FUN_00e8cb70();
    }
  }
  return;
}


