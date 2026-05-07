// Function: FUN_00546290
// Address: 00546290
// Size: 1758 bytes
// Class: MDPluginTransferTempoDialog


void FUN_00546290(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
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
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xb8) == 0) {
    return;
  }
  FUN_00d50b00();
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) goto LAB_005462db;
  FUN_00536640();
  FUN_0052f680();
  plVar1 = *(longlong **)(unaff_RDI + 0xa8);
  plVar6 = plVar1;
  if (plVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_0054659d;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0xa8);
      *(longlong **)(unaff_RDI + 0xa8) = local_40;
      plVar6 = local_40;
    }
    else {
      local_38 = '\0';
      plVar6 = local_40;
LAB_0054659d:
      *(longlong **)(unaff_RDI + 0xa8) = plVar6;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_005462db:
  iVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
  if (iVar5 == 0) {
    local_48 = (longlong *)FUN_00536680();
    FUN_00544e30();
    plVar1 = *(longlong **)(unaff_RDI + 0x80);
    if (0.0 < (double)local_48) {
      lVar2 = *(longlong *)(unaff_RDI + 0xb8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if ((*(longlong *)(unaff_RDI + 0xe0) == 0) && (*(longlong *)(unaff_RDI + 0xa8) == 0)) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar1 + 0x998))();
  }
  else {
    iVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
    lVar2 = DAT_0270cbb8;
    if (iVar5 == 1) {
      if (DAT_0270cbb8 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0270cbd0;
      if (DAT_0270cbd0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar3;
      local_110 = '\x01';
      local_108 = 0;
      local_100 = '\0';
      FUN_00d31230(&local_108,&local_118);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      local_48 = plVar1;
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x960))();
      local_f8 = plVar1;
      local_f0 = '\0';
      cVar4 = (**(code **)(*local_40 + 0x50))();
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_e8 = plVar1;
        local_e0 = '\0';
        (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x958))();
        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((*(longlong *)(unaff_RDI + 0xa8) == 0) ||
         (cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x3a0))(), cVar4 != '\0')) {
        cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x3a0))();
        lVar2 = DAT_0270cbb8;
        plVar1 = *(longlong **)(unaff_RDI + 0x98);
        if (cVar4 == '\0') {
          if (DAT_0270cbb8 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_0270cbe8;
          local_a8 = lVar2;
          local_a0 = '\x01';
          if (DAT_0270cbe8 != 0) {
            FUN_00d50b00();
          }
          local_98 = lVar3;
          local_90 = '\x01';
          local_88 = 0;
          local_80 = '\0';
          FUN_00d31230(&local_88,&local_98);
          local_58 = local_40;
          local_50 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_50 = '\x01';
          (**(code **)(*plVar1 + 0x958))();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_0270cbb8 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_0270cbe0;
          local_d8 = lVar2;
          local_d0 = '\x01';
          if (DAT_0270cbe0 != 0) {
            FUN_00d50b00();
          }
          local_c8 = lVar3;
          local_c0 = '\x01';
          local_b8 = 0;
          local_b0 = '\0';
          FUN_00d31230(&local_b8,&local_c8);
          local_68 = local_40;
          local_60 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_60 = '\x01';
          (**(code **)(*plVar1 + 0x958))();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01522f00(extraout_XMM0_Qa,&local_78);
        FUN_005457b0(local_40,local_78);
      }
      plVar1 = *(longlong **)(unaff_RDI + 0x80);
      lVar2 = *(longlong *)(unaff_RDI + 0xb8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if ((*(longlong *)(unaff_RDI + 0xe0) == 0) && (*(longlong *)(unaff_RDI + 0xa8) == 0)) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar1 + 0x998))();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}


