// Function: FUN_013e7d10
// Address: 013e7d10
// Size: 627 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013e7ed5) */
/* WARNING: Removing unreachable block (ram,0x013e7ede) */
/* WARNING: Removing unreachable block (ram,0x013e7ea9) */
/* WARNING: Removing unreachable block (ram,0x013e7eb2) */
/* WARNING: Removing unreachable block (ram,0x013e7f01) */
/* WARNING: Removing unreachable block (ram,0x013e7f0a) */
/* WARNING: Removing unreachable block (ram,0x013e7dc7) */
/* WARNING: Removing unreachable block (ram,0x013e7dd0) */
/* WARNING: Removing unreachable block (ram,0x013e7f6c) */
/* WARNING: Removing unreachable block (ram,0x013e7f79) */

void FUN_013e7d10(pthread_key_t param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_58;
  undefined8 *local_48;
  char local_40;
  
  lVar2 = *unaff_RSI;
  lVar5 = unaff_RSI[1];
  if (((char)lVar5 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 == 0) {
    local_58 = 0;
  }
  else {
    FUN_00d50b00();
    local_58 = lVar3;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = (pthread_key_t)local_58;
  }
  FUN_01270530();
  if (local_40 == '\0') {
    if (local_48 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_013e7dd5;
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
LAB_013e7dd5:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c71a0();
    if (local_48 == (undefined8 *)0x0) {
      local_48 = (undefined8 *)0x0;
      bVar4 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
    FUN_00d50b20();
    goto LAB_013e7e86;
  }
  uVar1 = *(undefined1 *)(lVar2 + 0x20);
  local_48 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_48 = &DAT_02539a88;
  local_48[2] = 0;
  (*DAT_02539aa0)();
  FUN_00b519f0(uVar1,0,0);
  bVar4 = true;
LAB_013e7e86:
  (**(code **)(*unaff_RDI + 0x6d0))();
  FUN_00d21140();
  FUN_00d23f50();
  if ((lVar3 != 0) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar5 != '\0') {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


