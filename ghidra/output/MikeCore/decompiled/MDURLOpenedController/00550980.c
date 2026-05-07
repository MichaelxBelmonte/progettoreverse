// Function: FUN_00550980
// Address: 00550980
// Size: 1173 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x00550ce7) */
/* WARNING: Removing unreachable block (ram,0x00550cf0) */
/* WARNING: Removing unreachable block (ram,0x00550b07) */
/* WARNING: Removing unreachable block (ram,0x00550b10) */
/* WARNING: Removing unreachable block (ram,0x00550bf7) */
/* WARNING: Removing unreachable block (ram,0x00550c00) */
/* WARNING: Removing unreachable block (ram,0x00550dd7) */
/* WARNING: Removing unreachable block (ram,0x00550de0) */

undefined8 * FUN_00550980(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar5 + 0x40),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar5 + 0x38),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar5 + 0x48),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar7 + 0x50),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0032bfd0();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


