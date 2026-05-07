// Function: FUN_0164e9f0
// Address: 0164e9f0
// Size: 1872 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0164eb4b) */
/* WARNING: Removing unreachable block (ram,0x0164eb58) */
/* WARNING: Removing unreachable block (ram,0x0164eb9a) */
/* WARNING: Removing unreachable block (ram,0x0164eba6) */
/* WARNING: Removing unreachable block (ram,0x0164eeeb) */
/* WARNING: Removing unreachable block (ram,0x0164eef7) */
/* WARNING: Removing unreachable block (ram,0x0164ef46) */
/* WARNING: Removing unreachable block (ram,0x0164ef5b) */
/* WARNING: Removing unreachable block (ram,0x0164ef6f) */
/* WARNING: Removing unreachable block (ram,0x0164ef7d) */
/* WARNING: Removing unreachable block (ram,0x0164ef9a) */
/* WARNING: Removing unreachable block (ram,0x0164efa3) */
/* WARNING: Removing unreachable block (ram,0x0164efa8) */
/* WARNING: Removing unreachable block (ram,0x0164efac) */
/* WARNING: Removing unreachable block (ram,0x0164efc1) */
/* WARNING: Removing unreachable block (ram,0x0164efd5) */
/* WARNING: Removing unreachable block (ram,0x0164efe3) */
/* WARNING: Removing unreachable block (ram,0x0164effe) */
/* WARNING: Removing unreachable block (ram,0x0164f007) */
/* WARNING: Removing unreachable block (ram,0x0164ef26) */
/* WARNING: Removing unreachable block (ram,0x0164ef34) */
/* WARNING: Removing unreachable block (ram,0x0164f016) */
/* WARNING: Removing unreachable block (ram,0x0164f03d) */
/* WARNING: Removing unreachable block (ram,0x0164f05a) */
/* WARNING: Removing unreachable block (ram,0x0164f04a) */
/* WARNING: Removing unreachable block (ram,0x0164f05d) */
/* WARNING: Removing unreachable block (ram,0x0164f078) */
/* WARNING: Removing unreachable block (ram,0x0164f089) */
/* WARNING: Removing unreachable block (ram,0x0164f097) */
/* WARNING: Removing unreachable block (ram,0x0164f0bf) */
/* WARNING: Removing unreachable block (ram,0x0164f0c4) */
/* WARNING: Removing unreachable block (ram,0x0164f0cc) */
/* WARNING: Removing unreachable block (ram,0x0164f0b1) */
/* WARNING: Removing unreachable block (ram,0x0164f0d4) */
/* WARNING: Removing unreachable block (ram,0x0164f0ec) */
/* WARNING: Removing unreachable block (ram,0x0164f0f1) */
/* WARNING: Removing unreachable block (ram,0x0164f0f7) */
/* WARNING: Removing unreachable block (ram,0x0164f100) */
/* WARNING: Removing unreachable block (ram,0x0164f105) */
/* WARNING: Removing unreachable block (ram,0x0164f10b) */
/* WARNING: Removing unreachable block (ram,0x0164f114) */
/* WARNING: Removing unreachable block (ram,0x0164f119) */
/* WARNING: Removing unreachable block (ram,0x0164f122) */
/* WARNING: Removing unreachable block (ram,0x0164f127) */
/* WARNING: Removing unreachable block (ram,0x0164eaa7) */
/* WARNING: Removing unreachable block (ram,0x0164ead0) */
/* WARNING: Removing unreachable block (ram,0x0164eaa9) */
/* WARNING: Removing unreachable block (ram,0x0164ead2) */

void FUN_0164e9f0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  longlong unaff_RDI;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  
  if ((*(char *)(unaff_RDI + 0xb3) != '\0') || (*(char *)(unaff_RDI + 0xb4) != '\0')) {
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2572358;
    *puVar1 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d21370();
    lVar5 = *(longlong *)(unaff_RDI + 0x98);
    if (lVar5 != 0) {
      local_68 = '\0';
      local_70 = 0;
      local_58 = -1;
      while( true ) {
        lVar2 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_58) break;
        local_70 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar2 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar5 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016557b0();
        local_40 = '\0';
        FUN_00d21140();
        local_48 = local_70;
      }
      FUN_00277f20();
      pVar4 = (pthread_key_t)lVar5;
    }
    if (*(int *)((longlong)puVar1 + 0xc) != 0) {
      FUN_0165a430();
      FUN_01650210();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar6 = (double)FUN_012ebfe0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01650210();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_012ebd30();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_01666eb0();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505900();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      dVar9 = 0.0;
      if (dVar6 <= 0.0) {
        dVar9 = dVar6;
      }
      if (dVar8 <= dVar7) {
        dVar8 = dVar7;
      }
      FUN_01518160(dVar9,dVar8,*(undefined1 *)(unaff_RDI + 0xb4),0);
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_01733c10();
    }
    *(undefined2 *)(unaff_RDI + 0xb3) = 0;
    FUN_00d50b20();
  }
  return;
}


