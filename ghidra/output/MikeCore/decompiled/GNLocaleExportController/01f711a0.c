// Function: FUN_01f711a0
// Address: 01f711a0
// Size: 726 bytes
// Class: GNLocaleExportController


undefined8 FUN_01f711a0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong lVar4;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_60 = 0;
    local_68 = *(longlong *)(unaff_RDI + 0x78);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    local_88 = 0;
    local_80 = '\0';
    FUN_01f2a980(&local_98,&local_68,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xc) == 1) {
        FUN_00d23310();
        lVar2 = local_38;
        pcVar3 = local_30;
        if (local_30[0] == '\0') {
          pcVar3 = &local_78;
        }
        local_78 = local_30[0];
        *pcVar3 = '\0';
        if ((local_30[0] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = *(longlong *)(unaff_RDI + 0x78);
        if (lVar4 == lVar2) {
          if ((local_78 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_78 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
              lVar4 = *(longlong *)(unaff_RDI + 0x78);
            }
          }
          else {
            local_78 = '\0';
          }
          *(longlong *)(unaff_RDI + 0x78) = lVar2;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        plVar1 = *(longlong **)(unaff_RDI + 0x98);
        if (*(longlong **)(unaff_RDI + 0x78) == (longlong *)0x0) {
          FUN_00d8ede0();
          local_48 = local_38;
          local_40 = 0;
          if (local_30[0] == '\0') {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_30[0] = '\0';
          }
          local_40 = '\x01';
          (**(code **)(*plVar1 + 0x968))();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_30[0] != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x470))();
          local_58 = local_38;
          local_50 = 0;
          if (local_30[0] == '\0') {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_30[0] = '\0';
          }
          local_50 = '\x01';
          (**(code **)(*plVar1 + 0x968))();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_30[0] != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
  }
  return 1;
}


