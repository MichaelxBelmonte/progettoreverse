// Function: FUN_006d3ba0
// Address: 006d3ba0
// Size: 732 bytes
// Class: MDMetaWindowController


undefined8 * FUN_006d3ba0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  char local_38 [8];
  
  FUN_006cb500();
  if ((local_80[0] == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_88 == 0) {
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (*(int *)(local_88 + 0xc) != 0) {
      FUN_00d23310();
      uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),local_80[0]);
      pcVar8 = local_38;
      if (local_80[0] != '\0') {
        pcVar8 = local_80;
      }
      local_38[0] = local_80[0];
      *pcVar8 = '\0';
      if ((local_80[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8b60();
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e61a0();
      lVar2 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        local_80[0] = '\0';
        local_78 = lVar2;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar9 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar9 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar3 = FUN_012e6040();
            if (iVar3 == 1) {
LAB_006d3df1:
              local_48 = '\0';
              local_50 = lVar1;
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_012e6040();
              if (iVar3 == 2) goto LAB_006d3df1;
            }
            lVar9 = lVar9 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
          } while ((int)lVar9 < *(int *)(lVar2 + 0xc));
        }
        FUN_000be170();
        FUN_00d50b20();
      }
    }
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


