// Function: FUN_006fe4f0
// Address: 006fe4f0
// Size: 588 bytes
// Class: MUElementAnalyzer


void FUN_006fe4f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  int local_38;
  undefined8 local_34;
  
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    cVar2 = FUN_00e34230();
    if (cVar2 == '\0') {
      cVar2 = FUN_00e34240();
      if (cVar2 == '\0') {
        lVar3 = *(longlong *)(unaff_RDI + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_60 = *param_2;
        local_58 = '\0';
        FUN_002e4d80(param_1,&local_60);
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          local_48 = 0;
          local_50 = 0;
          local_40 = lVar1;
          local_34 = 0;
          for (lVar3 = 0; local_38 = (int)lVar3, local_38 < *(int *)(lVar1 + 0xc); lVar3 = lVar3 + 1
              ) {
            local_50 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8);
            FUN_01bca0a0();
          }
          FUN_00713b30();
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar3 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_70 = *param_2;
      local_68 = '\0';
      FUN_002e4d80(param_1,&local_70);
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        local_48 = 0;
        local_50 = 0;
        local_40 = lVar1;
        local_34 = 0;
        for (lVar3 = 0; local_38 = (int)lVar3, local_38 < *(int *)(lVar1 + 0xc); lVar3 = lVar3 + 1)
        {
          local_50 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8);
          FUN_01bca0a0();
        }
        FUN_00713b30();
        FUN_00d50b20();
      }
    }
  }
  return;
}


