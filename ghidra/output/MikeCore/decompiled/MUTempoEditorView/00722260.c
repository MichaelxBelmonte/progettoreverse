// Function: FUN_00722260
// Address: 00722260
// Size: 704 bytes
// Class: MUTempoEditorView


/* WARNING: Removing unreachable block (ram,0x007223a5) */
/* WARNING: Removing unreachable block (ram,0x007223aa) */
/* WARNING: Removing unreachable block (ram,0x00722340) */
/* WARNING: Removing unreachable block (ram,0x00722349) */
/* WARNING: Removing unreachable block (ram,0x0072243a) */
/* WARNING: Removing unreachable block (ram,0x00722443) */

longlong * FUN_00722260(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_58;
  char local_50;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_90 = 0;
    local_98 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_98 = lVar2;
        cVar3 = FUN_00d23d70();
        if (cVar3 != '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *unaff_RDI = lVar2;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_000be170();
          if (puVar4 == (undefined8 *)0x0) {
            return unaff_RDI;
          }
          goto LAB_007224e5;
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if (lVar2 != 0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d214d0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  local_b8 = *param_2;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = puVar4;
  FUN_00722260(&local_a8,&local_b8);
  if (puVar4 != (undefined8 *)0x0) {
LAB_007224e5:
    FUN_00d50b20();
  }
  return unaff_RDI;
}


