// Function: FUN_01a40b30
// Address: 01a40b30
// Size: 873 bytes
// Class: Unknown


undefined8 * FUN_01a40b30(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  void *pvVar7;
  code *pcVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  code *pcVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar12;
  undefined8 uVar13;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_50 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  pcVar3 = DAT_02572370;
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar12 = 0;
      pcVar11 = DAT_02572370;
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0x10) + lVar12 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)pcVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_012754d0(param_1,0);
        pVar10 = (pthread_key_t)pcVar11;
        if (cVar5 != '\0') {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_013df480();
          puVar4 = local_48;
          local_38[0] = local_40[0];
          pcVar11 = (code *)local_38;
          pcVar8 = (code *)local_40;
          if (local_40[0] == (code)0x0) {
            pcVar8 = pcVar11;
          }
          *pcVar8 = (code)0x0;
          if ((local_40[0] != (code)0x0) && (local_48 != (undefined8 *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          local_80 = puVar4;
          local_78 = '\0';
          FUN_0076f110(uVar13,&local_80);
          puVar9 = local_48;
          if (local_40[0] == (code)0x0) {
            if (((local_48 != (undefined8 *)0x0) && (FUN_00d50b00(), local_40[0] != (code)0x0)) &&
               (local_48 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = (code)0x0;
          }
          if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &DAT_02572358;
            uVar13 = (*pcVar3)();
            local_68 = '\0';
            local_60 = puVar4;
            local_58 = '\0';
            local_70 = puVar9;
            FUN_0076f1c0(uVar13,&local_60);
            if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_40[0] = (code)0x0;
          local_48 = puVar2;
          FUN_00d21140();
          if ((local_40[0] != (code)0x0) && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38[0] != (code)0x0) && (puVar4 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


