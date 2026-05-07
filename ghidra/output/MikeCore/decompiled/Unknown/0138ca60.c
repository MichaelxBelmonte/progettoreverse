// Function: FUN_0138ca60
// Address: 0138ca60
// Size: 1492 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0138cf64) */
/* WARNING: Removing unreachable block (ram,0x0138cf6d) */
/* WARNING: Removing unreachable block (ram,0x0138d026) */
/* WARNING: Removing unreachable block (ram,0x0138d02f) */
/* WARNING: Removing unreachable block (ram,0x0138ced5) */
/* WARNING: Removing unreachable block (ram,0x0138cebd) */
/* WARNING: Removing unreachable block (ram,0x0138cbb7) */
/* WARNING: Removing unreachable block (ram,0x0138cbc0) */
/* WARNING: Removing unreachable block (ram,0x0138cc98) */
/* WARNING: Removing unreachable block (ram,0x0138cca5) */
/* WARNING: Removing unreachable block (ram,0x0138cecc) */
/* WARNING: Removing unreachable block (ram,0x0138cde9) */
/* WARNING: Removing unreachable block (ram,0x0138cdf2) */
/* WARNING: Removing unreachable block (ram,0x0138caff) */
/* WARNING: Removing unreachable block (ram,0x0138cb20) */
/* WARNING: Removing unreachable block (ram,0x0138cb01) */
/* WARNING: Removing unreachable block (ram,0x0138cb22) */
/* WARNING: Removing unreachable block (ram,0x0138cee0) */
/* WARNING: Removing unreachable block (ram,0x0138cef4) */
/* WARNING: Removing unreachable block (ram,0x0138cf16) */
/* WARNING: Removing unreachable block (ram,0x0138cf02) */
/* WARNING: Removing unreachable block (ram,0x0138cf1a) */
/* WARNING: Removing unreachable block (ram,0x0138cf36) */
/* WARNING: Removing unreachable block (ram,0x0138cf3e) */
/* WARNING: Removing unreachable block (ram,0x0138cf2d) */
/* WARNING: Removing unreachable block (ram,0x0138cf46) */
/* WARNING: Removing unreachable block (ram,0x0138cf77) */
/* WARNING: Removing unreachable block (ram,0x0138cf7f) */
/* WARNING: Removing unreachable block (ram,0x0138cf85) */
/* WARNING: Removing unreachable block (ram,0x0138cf8e) */
/* WARNING: Removing unreachable block (ram,0x0138cf93) */
/* WARNING: Removing unreachable block (ram,0x0138cf9f) */
/* WARNING: Removing unreachable block (ram,0x0138cfb3) */
/* WARNING: Removing unreachable block (ram,0x0138cfc0) */
/* WARNING: Removing unreachable block (ram,0x0138cfce) */
/* WARNING: Removing unreachable block (ram,0x0138cff2) */
/* WARNING: Removing unreachable block (ram,0x0138d003) */
/* WARNING: Removing unreachable block (ram,0x0138d011) */
/* WARNING: Removing unreachable block (ram,0x0138d034) */

void FUN_0138ca60(void)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined *puVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 *unaff_RDI;
  int local_60;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  puVar7 = (undefined *)*unaff_RDI;
  if (puVar7 != (undefined *)0x0) {
    local_60 = -1;
LAB_0138cafb:
    while (local_60 = local_60 + 1, local_60 < *(int *)(puVar7 + 0xc)) {
      pVar5 = (pthread_key_t)*(undefined8 *)(puVar7 + 0x10);
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') goto LAB_0138cba0;
      if (local_40 != 0) goto LAB_0138cbd0;
    }
    FUN_001159b0();
    puVar6 = puVar7;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
  }
  if (0 < *(int *)((longlong)puVar2 + 0xc)) {
    iVar1 = 0;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc340();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d19a0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((longlong)puVar2 + 0xc));
  }
  FUN_001150f0();
  FUN_00d50b20();
  return;
LAB_0138cba0:
  if (local_40 != 0) {
    FUN_00d50b00();
LAB_0138cbd0:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar3 = _pthread_getspecific(pVar5);
    lVar8 = local_40;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar8 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar1 = 5;
    if ((*(longlong *)(lVar8 + 0x1f8) == 0) && (iVar1 = 6, *(longlong *)(lVar8 + 0x200) == 0)) {
      if (*(longlong *)(lVar8 + 0x148) == 0) {
        iVar1 = 0;
      }
      else {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar1 = FUN_0141bab0();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 2) {
      local_38 = '\0';
      FUN_00d235a0();
    }
    FUN_00d50b20();
  }
  goto LAB_0138cafb;
}


