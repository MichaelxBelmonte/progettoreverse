// Function: FUN_004a21b0
// Address: 004a21b0
// Size: 813 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x004a2482) */
/* WARNING: Removing unreachable block (ram,0x004a248b) */
/* WARNING: Removing unreachable block (ram,0x004a23db) */
/* WARNING: Removing unreachable block (ram,0x004a23e8) */
/* WARNING: Removing unreachable block (ram,0x004a2430) */
/* WARNING: Removing unreachable block (ram,0x004a2463) */
/* WARNING: Removing unreachable block (ram,0x004a2477) */
/* WARNING: Removing unreachable block (ram,0x004a24b1) */
/* WARNING: Removing unreachable block (ram,0x004a24ba) */

undefined8 * FUN_004a21b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  void *pvVar5;
  code *pcVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_78;
  char local_70;
  undefined8 *local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar3 = DAT_02572370;
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      pcVar6 = DAT_02572370;
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_004a26e0();
        if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (undefined8 *)0x0) {
          local_40 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &DAT_02572358;
          (*pcVar3)();
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          FUN_004a2790();
        }
        local_38 = '\0';
        FUN_00d21140();
        if (local_40 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_40 = puVar2;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


