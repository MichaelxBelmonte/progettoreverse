// Function: FUN_012f4d80
// Address: 012f4d80
// Size: 835 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012f5077) */
/* WARNING: Removing unreachable block (ram,0x012f5084) */
/* WARNING: Removing unreachable block (ram,0x012f500e) */
/* WARNING: Removing unreachable block (ram,0x012f501b) */

undefined8 * FUN_012f4d80(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar9;
  longlong local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar1 == 0) {
    bVar9 = false;
    lVar8 = *(longlong *)(unaff_RSI + 0x40);
  }
  else {
    FUN_00d50b00();
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165a0b0();
    bVar9 = local_88 == unaff_RSI;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = *(longlong *)(unaff_RSI + 0x40);
  }
  if (lVar8 != 0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar4 != (void *)0x0) {
      lVar8 = *(longlong *)(unaff_RSI + 0x40);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x38);
    if (lVar8 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar8 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
          if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            lVar6 = *(longlong *)(lVar2 + 0x60);
          }
          else {
            lVar6 = *(longlong *)
                     (*(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                     0x60);
          }
          if (lVar6 != 0) {
            FUN_00d50b00();
            if (bVar9) {
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a0b0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 == lVar2) {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = lVar2;
              }
            }
            else {
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 == lVar2) {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = lVar2;
              }
            }
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar8 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


