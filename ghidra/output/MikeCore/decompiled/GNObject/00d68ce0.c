// Function: FUN_00d68ce0
// Address: 00d68ce0
// Size: 827 bytes
// Class: GNObject


undefined8 * FUN_00d68ce0(undefined1 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  undefined8 *local_38;
  
  plVar4 = local_78;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x3d8))();
  local_40 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d68d7a;
    }
  }
  else if (local_78 != (longlong *)0x0) {
LAB_00d68d7a:
    local_70[0] = '\0';
    local_78 = (longlong *)0x0;
    local_40 = plVar4;
    local_68 = plVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_38 = puVar2;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar5 = -local_60._4_4_;
        }
        else {
          iVar5 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar5 = 0;
        }
        local_60 = CONCAT44(iVar5,(int)local_60);
      }
      lVar3 = (longlong)(int)local_60;
      iVar5 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar5) break;
      local_78 = *(longlong **)(local_68[2] + 8 + lVar3 * 8);
      local_a0 = *param_2;
      local_98 = '\0';
      (**(code **)(*local_78 + 0x388))(param_1,&local_a0);
      lVar3 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        local_48 = '\0';
        local_50 = lVar3;
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00c6f7c0();
    puVar2 = local_38;
  }
  local_88 = '\0';
  local_90 = puVar2;
  cVar1 = (**(code **)(*local_40 + 0x50))();
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (*(int *)((longlong)puVar2 + 0xc) < 2) {
      if (*(int *)((longlong)puVar2 + 0xc) != 1) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        goto LAB_00d6900d;
      }
      FUN_00d23340();
      plVar4 = &local_50;
      if (local_70[0] != '\0') {
        plVar4 = (longlong *)local_70;
      }
      local_50 = CONCAT71(local_50._1_7_,local_70[0]);
      *(char *)plVar4 = '\0';
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (((char)local_50 == '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d68760();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_70[0] == '\0') {
        if (local_78 == (longlong *)0x0) {
          local_78 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
    }
    *unaff_RDI = local_78;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = unaff_RSI;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
LAB_00d6900d:
  FUN_00d50b20();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


