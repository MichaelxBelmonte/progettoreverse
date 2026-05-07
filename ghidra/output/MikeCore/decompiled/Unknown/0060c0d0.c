// Function: FUN_0060c0d0
// Address: 0060c0d0
// Size: 1471 bytes
// Class: Unknown


void FUN_0060c0d0(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  longlong *local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (0 < *(int *)(unaff_RDI[0x32] + 0xc)) {
    uVar7 = (**(code **)(*unaff_RDI + 0x640))();
    local_60 = local_58;
    if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) &&
        (uVar7 = FUN_00d50b00(), local_50 != '\0')) && (local_58 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar4 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_d8 = lVar4;
    local_d0 = '\x01';
    uVar7 = (**(code **)(*local_60 + 0x3b0))(uVar7,&local_d8);
    plVar1 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != (longlong *)0x0) && (uVar7 = FUN_00d50b00(), local_50 != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar4 = DAT_026fe4b8;
    local_80 = plVar1;
    if (DAT_026fe4b8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_c8 = lVar4;
    local_c0 = '\x01';
    (**(code **)(*local_60 + 0x3b0))(uVar7,&local_c8);
    local_78 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_02724b70;
    if (DAT_02724b70 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar4;
    local_b0 = '\x01';
    (**(code **)(*local_60 + 0x3b0))();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
    (*DAT_02680418)();
    local_88 = puVar3;
    if (unaff_RDI[0x32] != 0) {
      local_50 = '\0';
      local_58 = (longlong *)0x0;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = unaff_RDI[0x32];
      while( true ) {
        lVar4 = (longlong)(int)local_40;
        iVar6 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar6);
        if (*(int *)(local_48 + 0xc) <= iVar6) break;
        local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar4 * 8);
        FUN_003a4d40();
        fVar8 = (float)(**(code **)(*unaff_RDI + 0xae0))();
        if (local_38 == 0 && (int)local_40 == 0) {
          bVar5 = 0x13;
          lVar4 = *unaff_RSI;
          if (local_58 != (longlong *)unaff_RDI[0x33]) goto LAB_0060c444;
LAB_0060c4ea:
          local_a0 = '\0';
          local_a8 = lVar4;
          uVar7 = (**(code **)(*local_60 + 0x3f0))(fVar8,0x2c,1,1);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
        }
        else {
          fVar8 = fVar8 + DAT_02390d00;
          bVar5 = (int)local_40 == *(int *)(local_48 + 0xc) + -1 | 0x14;
          lVar4 = *unaff_RSI;
          if (local_58 == (longlong *)unaff_RDI[0x33]) goto LAB_0060c4ea;
LAB_0060c444:
          local_90 = '\0';
          local_98 = lVar4;
          uVar7 = (**(code **)(*local_60 + 0x3f0))(bVar5,0x2c,0,1);
          if ((local_90 != '\0') && (local_98 != 0)) {
            uVar7 = FUN_00d50b20();
          }
        }
        local_108 = local_58;
        local_100 = 0;
        FUN_0060c9f0(uVar7,&local_108);
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar6 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar6 = 0;
          }
          local_40 = CONCAT44(iVar6,(int)local_40);
        }
      }
      FUN_006106b0();
    }
    lVar4 = unaff_RDI[0x34];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    local_58 = (longlong *)lVar4;
    cVar2 = FUN_00d23d70();
    uVar7 = extraout_XMM0_Da;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if (lVar4 != 0) {
      uVar7 = FUN_00d50b20();
    }
    plVar1 = local_80;
    if (cVar2 != '\0') {
      local_f8 = *unaff_RSI;
      local_f0 = 0;
      lVar4 = unaff_RDI[0x34];
      if (lVar4 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_e0 = 1;
      local_e8 = lVar4;
      FUN_0060d0d0(uVar7,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_88 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


