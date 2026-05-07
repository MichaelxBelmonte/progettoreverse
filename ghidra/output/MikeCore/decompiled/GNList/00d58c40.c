// Function: FUN_00d58c40
// Address: 00d58c40
// Size: 654 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d58e30) */
/* WARNING: Removing unreachable block (ram,0x00d58e39) */
/* WARNING: Removing unreachable block (ram,0x00d58e8b) */
/* WARNING: Removing unreachable block (ram,0x00d58e94) */

void FUN_00d58c40(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *local_58;
  char local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_02774da0;
  local_44 = (undefined4)param_1;
  if (DAT_02774da0 != 0) {
    FUN_00e31530(param_1,0);
  }
  FUN_00d99b10();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00e31530(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02774da0;
  if (DAT_02774da0 != 0) {
    FUN_00e31530();
  }
  FUN_00d99be0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00e31530(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    if (unaff_RDI == (longlong *)0x0) {
      unaff_RDI = (longlong *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_00e31530();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x98))();
    unaff_RDI = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = false;
      unaff_RDI = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00e31530();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
  }
  local_58 = plVar4;
  local_50 = '\0';
  (**(code **)(*unaff_RDI + 0xc0))(local_44,&local_58);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


