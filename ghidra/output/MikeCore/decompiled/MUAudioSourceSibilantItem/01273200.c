// Function: FUN_01273200
// Address: 01273200
// Size: 1144 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0127353f) */
/* WARNING: Removing unreachable block (ram,0x01273548) */
/* WARNING: Removing unreachable block (ram,0x01273372) */
/* WARNING: Removing unreachable block (ram,0x0127337b) */
/* WARNING: Removing unreachable block (ram,0x012733a8) */
/* WARNING: Removing unreachable block (ram,0x012733b1) */
/* WARNING: Removing unreachable block (ram,0x012734b4) */
/* WARNING: Removing unreachable block (ram,0x012734c0) */
/* WARNING: Removing unreachable block (ram,0x012735ac) */
/* WARNING: Removing unreachable block (ram,0x012735b8) */
/* WARNING: Removing unreachable block (ram,0x012733f5) */
/* WARNING: Removing unreachable block (ram,0x012733fe) */
/* WARNING: Removing unreachable block (ram,0x0127362a) */
/* WARNING: Removing unreachable block (ram,0x01273637) */
/* WARNING: Removing unreachable block (ram,0x012732c7) */
/* WARNING: Removing unreachable block (ram,0x012732f0) */
/* WARNING: Removing unreachable block (ram,0x012732c9) */
/* WARNING: Removing unreachable block (ram,0x012732f2) */
/* WARNING: Removing unreachable block (ram,0x01273438) */
/* WARNING: Removing unreachable block (ram,0x01273445) */

undefined8 * FUN_01273200(void)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_70;
  char local_68;
  int local_58;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    while( true ) {
      lVar7 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_58) break;
      local_70 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
      lVar7 = local_70;
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar7 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      if (*(longlong *)(lVar7 + 0x100) != 0) {
        iVar3 = FUN_00d237a0();
        if (iVar3 == -1) {
          FUN_00d21140();
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_02572358;
          (*pcVar2)();
          FUN_00d21140();
          FUN_00d50b20();
        }
        FUN_00d21140();
      }
    }
    FUN_001159b0();
  }
  plVar11 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar11 + 0x18))();
  FUN_012e8850();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (local_70 == 0) {
    *unaff_RDI = plVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar3 = 0;
      do {
        iVar4 = FUN_00d23d20();
        lVar1 = *(longlong *)(puVar5[2] + (longlong)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_70 + 0xc));
    }
    FUN_000be170();
    *unaff_RDI = plVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


