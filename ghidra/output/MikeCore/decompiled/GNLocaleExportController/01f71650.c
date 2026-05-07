// Function: FUN_01f71650
// Address: 01f71650
// Size: 1332 bytes
// Class: GNLocaleExportController


undefined8 FUN_01f71650(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong lVar5;
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
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  longlong local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_90 = 0;
    local_98 = *(longlong *)(unaff_RDI + 0x80);
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_c8 = 0;
    local_c0 = '\0';
    FUN_01f2a980(&local_d8,&local_98,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc) != 1)) {
      if (*(longlong *)(unaff_RDI + 0x80) != 0) {
        *(undefined8 *)(unaff_RDI + 0x80) = 0;
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_38;
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_48;
      }
      local_48 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x80);
      if (lVar5 == lVar3) {
        if ((local_48 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (lVar3 != 0) {
            FUN_00d50b00();
            lVar5 = *(longlong *)(unaff_RDI + 0x80);
          }
        }
        else {
          local_48 = '\0';
        }
        *(longlong *)(unaff_RDI + 0x80) = lVar3;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    if (*(longlong **)(unaff_RDI + 0x80) == (longlong *)0x0) {
      FUN_00d8ede0();
      local_78 = local_38;
      local_70 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x470))();
      local_88 = local_38;
      local_80 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x80) == 0) {
      FUN_00d6f370();
      FUN_00d8ede0();
      local_50 = 0;
      local_58 = CONCAT71(uStack_47,local_48);
      local_a8 = DAT_02800c50;
      if (local_40 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          local_a8 = DAT_02800c50;
        }
      }
      else {
        local_40 = '\0';
      }
      local_50 = '\x01';
      DAT_02800c50 = local_a8;
      if (local_a8 != 0) {
        local_50 = '\x01';
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_00d6f570();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d6f370();
      (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x368))();
      local_60 = 0;
      local_68 = CONCAT71(uStack_47,local_48);
      local_b8 = DAT_02800c58;
      if (local_40 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          local_b8 = DAT_02800c58;
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      DAT_02800c58 = local_b8;
      if (local_b8 != 0) {
        local_60 = '\x01';
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d6f570();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_30[0] != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}


