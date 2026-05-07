// Function: FUN_004f9820
// Address: 004f9820
// Size: 878 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x004f9a26) */
/* WARNING: Removing unreachable block (ram,0x004f9a2f) */
/* WARNING: Removing unreachable block (ram,0x004f98a8) */
/* WARNING: Removing unreachable block (ram,0x004f98b1) */
/* WARNING: Removing unreachable block (ram,0x004f9ae9) */
/* WARNING: Removing unreachable block (ram,0x004f9af2) */
/* WARNING: Removing unreachable block (ram,0x004f98f7) */
/* WARNING: Removing unreachable block (ram,0x004f9920) */
/* WARNING: Removing unreachable block (ram,0x004f98f9) */
/* WARNING: Removing unreachable block (ram,0x004f9922) */

void FUN_004f9820(pthread_key_t param_1)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar6 = local_58;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_004f98b6;
    }
LAB_004f9a78:
    bVar1 = true;
  }
  else {
    if (local_58 == 0) goto LAB_004f9a78;
LAB_004f98b6:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      lVar5 = *(longlong *)(lVar6 + 0x10);
      local_58 = *(longlong *)(lVar5 + 8 + lVar3 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
      pVar4 = (pthread_key_t)lVar5;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_70 = local_88;
        local_68 = '\0';
        FUN_00d235a0();
        if (local_88 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    param_1 = (pthread_key_t)lVar6;
    bVar1 = false;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_004f9b8f;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_004f9b8f;
  for (iVar7 = 0; iVar7 < *(int *)(local_58 + 0xc); iVar7 = iVar7 + 1) {
    FUN_004f9820();
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_004f9b8f:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}


