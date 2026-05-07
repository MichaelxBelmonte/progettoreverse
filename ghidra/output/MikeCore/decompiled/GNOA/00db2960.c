// Function: FUN_00db2960
// Address: 00db2960
// Size: 558 bytes
// Class: GNOA


/* WARNING: Removing unreachable block (ram,0x00db2a8a) */
/* WARNING: Removing unreachable block (ram,0x00db2a93) */
/* WARNING: Removing unreachable block (ram,0x00db2b64) */
/* WARNING: Removing unreachable block (ram,0x00db2b6d) */

void FUN_00db2960(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x30) != 0) {
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x210))(param_1,*param_2);
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))();
  lVar3 = lVar1;
  if (cVar2 != '\0') {
    cVar2 = FUN_00d77de0();
    if ((cVar2 != '\0') && (lVar3 = 0, lVar1 != 0)) {
      FUN_019ba260();
      lVar3 = lVar1;
      if (lVar1 != local_40) {
        local_48 = local_40;
        if (local_38 != '\0') {
          FUN_00d50b20();
          local_38 = '\0';
          lVar3 = local_48;
          goto LAB_00db2a98;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = local_48;
        lVar1 = local_40;
      }
      if ((local_38 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00db2a98:
  local_60 = '\0';
  local_58 = *param_2;
  local_50 = '\0';
  local_68 = lVar3;
  FUN_00d3bc70(&local_58,&local_68);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00db2790();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


