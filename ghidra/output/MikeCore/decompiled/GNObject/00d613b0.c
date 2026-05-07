// Function: FUN_00d613b0
// Address: 00d613b0
// Size: 617 bytes
// Class: GNObject


void FUN_00d613b0(int param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int extraout_var;
  int extraout_var_00;
  char *pcVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0 [8];
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  char local_3c;
  char local_38 [8];
  
  if (param_1 == -1) {
    param_1 = *(int *)(*(longlong *)((longlong)*(int *)(param_2 + 0x24) + (longlong)unaff_RDI) + 0xc
                      );
  }
  if ((param_4 == '\0') || (cVar2 = (**(code **)(*unaff_RDI + 0x1e0))(), cVar2 == '\0')) {
    local_3c = '\0';
  }
  else {
    local_98 = *unaff_RSI;
    local_90 = '\0';
    (**(code **)(*unaff_RDI + 0x160))(param_1,param_2);
    local_3c = '\x01';
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  local_88 = *unaff_RSI;
  local_80 = '\0';
  FUN_00d23370();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (param_3 != '\0') {
    FUN_00d77be0();
    pcVar3 = local_38;
    if (local_a0[0] != '\0') {
      pcVar3 = local_a0;
    }
    local_38[0] = local_a0[0];
    *pcVar3 = '\0';
    if ((local_a0[0] != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d77bd0();
      if (extraout_var < 2) {
        FUN_00d77bd0();
        if (extraout_var_00 == 1) {
          plVar1 = (longlong *)*unaff_RSI;
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00e31530();
          }
          (**(code **)(*plVar1 + 0x200))(0,local_a8,local_3c);
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (longlong *)*unaff_RSI;
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00e31530();
        }
        (**(code **)(*plVar1 + 0x220))(0xffffffff,local_a8,0,local_3c);
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if (local_3c != '\0') {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    (**(code **)(*unaff_RDI + 0x170))(param_1,param_2);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


