// Function: FUN_01e52c50
// Address: 01e52c50
// Size: 1214 bytes
// Class: Unknown
// String references:
//   "%@: window not connected."
//   "%@ not found."


/* WARNING: Removing unreachable block (ram,0x01e52e3f) */
/* WARNING: Removing unreachable block (ram,0x01e52e4b) */
/* WARNING: Removing unreachable block (ram,0x01e52e25) */
/* WARNING: Removing unreachable block (ram,0x01e52e31) */
/* WARNING: Removing unreachable block (ram,0x01e52e59) */
/* WARNING: Removing unreachable block (ram,0x01e52e65) */
/* WARNING: Removing unreachable block (ram,0x01e53018) */
/* WARNING: Removing unreachable block (ram,0x01e53024) */
/* WARNING: Removing unreachable block (ram,0x01e52d6b) */
/* WARNING: Removing unreachable block (ram,0x01e52d74) */
/* WARNING: Removing unreachable block (ram,0x01e52cfc) */
/* WARNING: Removing unreachable block (ram,0x01e52d05) */
/* WARNING: Removing unreachable block (ram,0x01e52fff) */
/* WARNING: Removing unreachable block (ram,0x01e53008) */

void FUN_01e52c50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 *local_58;
  
  if (*param_2 == 0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    plVar1 = (longlong *)*param_2;
    if (plVar1 == plVar6) {
      if ((char)param_2[1] != '\0') {
        FUN_00d50b20();
        goto LAB_01e52cc7;
      }
    }
    else {
      *param_2 = (longlong)plVar6;
      if (((char)param_2[1] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
LAB_01e52cc7:
  local_58 = DAT_027f3818;
  if (DAT_027f3818 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  cVar5 = FUN_00c9ff50();
  if (local_58 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_58 = DAT_027f3818;
    if (DAT_027f3818 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  bVar3 = false;
  if (unaff_RDI[2] == 0) {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02572358;
    (*DAT_02572370)();
    cVar5 = FUN_01e2af10();
    lVar4 = DAT_027fe468;
    if (cVar5 == '\0') {
      if (DAT_027fe468 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *unaff_RSI;
      bVar3 = true;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      local_58 = &DAT_024c5048;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[3] == 0) {
      FUN_00d50b00();
      FUN_01e30780();
      if (local_58 == (undefined8 *)0x0) {
        bVar3 = true;
        local_58 = (undefined8 *)0x0;
      }
      else if (bVar3) {
        bVar3 = false;
      }
      else {
        FUN_00d50b00();
        bVar3 = false;
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027fe468;
      if (bVar3) {
        if (DAT_027fe468 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *unaff_RSI;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      puVar7 = (undefined8 *)unaff_RDI[3];
      if (puVar7 != local_58) {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        unaff_RDI[3] = (longlong)local_58;
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = (undefined8 *)0x0;
    }
    FUN_01e511c0();
    FUN_01e51330();
    (**(code **)(*unaff_RDI + 0x518))();
    FUN_00d50b20();
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


