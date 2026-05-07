// Function: FUN_01328810
// Address: 01328810
// Size: 713 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x01328acd) */
/* WARNING: Removing unreachable block (ram,0x01328ada) */
/* WARNING: Removing unreachable block (ram,0x01328967) */
/* WARNING: Removing unreachable block (ram,0x01328970) */
/* WARNING: Removing unreachable block (ram,0x01328a93) */
/* WARNING: Removing unreachable block (ram,0x01328a9c) */
/* WARNING: Removing unreachable block (ram,0x013288af) */
/* WARNING: Removing unreachable block (ram,0x013288d0) */
/* WARNING: Removing unreachable block (ram,0x013288b1) */
/* WARNING: Removing unreachable block (ram,0x013288d2) */
/* WARNING: Removing unreachable block (ram,0x0132899d) */
/* WARNING: Removing unreachable block (ram,0x013289aa) */

void FUN_01328810(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar6;
  int local_50;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  puVar5 = *(undefined **)(unaff_RSI + 200);
  if (puVar5 != (undefined *)0x0) {
    local_50 = -1;
LAB_013288ab:
    while (local_50 = local_50 + 1, local_50 < *(int *)(puVar5 + 0xc)) {
      pvVar3 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(puVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      if (local_38 == '\0') goto LAB_01328950;
      if (local_40 != 0) goto LAB_01328980;
    }
    FUN_0131c8b0();
    puVar4 = puVar5;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc000();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01328ab0;
          }
        }
        else if (local_40 != 0) {
LAB_01328ab0:
          local_38 = '\0';
          FUN_00d235a0();
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_013dc230();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
LAB_01328950:
  if (local_40 != 0) {
    FUN_00d50b00();
LAB_01328980:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_013288ab;
}


