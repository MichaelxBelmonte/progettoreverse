// Function: FUN_00d61870
// Address: 00d61870
// Size: 934 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00d61ba2) */
/* WARNING: Removing unreachable block (ram,0x00d61bae) */
/* WARNING: Removing unreachable block (ram,0x00d61b55) */
/* WARNING: Removing unreachable block (ram,0x00d6192f) */
/* WARNING: Removing unreachable block (ram,0x00d6193b) */
/* WARNING: Removing unreachable block (ram,0x00d61b61) */
/* WARNING: Removing unreachable block (ram,0x00d61be6) */
/* WARNING: Removing unreachable block (ram,0x00d61bf2) */

void FUN_00d61870(char param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int extraout_var;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  char cVar5;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x210))();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00e31530(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((param_3 == '\0') || (cVar2 = (**(code **)(*unaff_RDI + 0x1e0))(), cVar2 == '\0')) {
    cVar5 = '\0';
    cVar2 = '\0';
  }
  else {
    (**(code **)(*unaff_RDI + 0x168))();
    cVar5 = '\x01';
    cVar2 = '\x01';
  }
  if (param_1 != '\0') {
    FUN_00d77be0();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    cVar2 = cVar5;
    if (local_48 != 0) {
      FUN_00d77be0();
      FUN_00d77bd0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (extraout_var < 2) {
        FUN_00d77be0();
        uVar3 = FUN_00d77bd0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((uVar3 & 0xffffffff00000000) == 0x100000000) {
          plVar1 = (longlong *)*unaff_RSI;
          FUN_00d77f60();
          local_60 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00e31530();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_60 = '\x01';
          local_68 = local_48;
          (**(code **)(*plVar1 + 0x1f0))(0,&local_68,cVar5);
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (longlong *)*unaff_RSI;
        FUN_00e31530();
        (**(code **)(*plVar1 + 0x228))(0,local_48,1);
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23f50();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0x178))();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


