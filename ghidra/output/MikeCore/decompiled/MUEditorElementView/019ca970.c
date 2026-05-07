// Function: FUN_019ca970
// Address: 019ca970
// Size: 1064 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019cad69) */
/* WARNING: Removing unreachable block (ram,0x019cad72) */

ulonglong FUN_019ca970(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined8 uVar12;
  longlong local_88;
  char local_80;
  double local_68;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  uVar8 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  if ((iVar1 != 0) && (param_2 != '\0')) {
    (**(code **)(*unaff_RDI + 0xe20))();
    FUN_00d23310();
    uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar7 = local_38;
    if (local_40[0] != '\0') {
      pcVar7 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar7 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)uVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_0125a280();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = 1;
    while( true ) {
      (**(code **)(*unaff_RDI + 0xe20))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= lVar9) break;
      (**(code **)(*unaff_RDI + 0xe20))();
      pvVar4 = _pthread_getspecific((pthread_key_t)uVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (dVar11 < local_68) {
        (**(code **)(*unaff_RDI + 0xe20))();
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_0125a280();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
    }
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    uVar12 = (*DAT_02572370)();
    dVar11 = (double)(**(code **)(*unaff_RDI + 0x9b0))(uVar12,1);
    if ((((local_40[0] == '\0') && (local_48 != 0)) &&
        (dVar11 = (double)FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      dVar11 = (double)FUN_00d50b20();
    }
    if (*(int *)(local_48 + 0xc) < 1) {
      bVar3 = false;
      lVar9 = 0;
    }
    else {
      lVar10 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + lVar10 * 8);
        lVar6 = local_48;
        if (lVar9 == lVar2) {
          if ((!bVar3) && (lVar9 != 0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (lVar9 != 0)) {
            FUN_00d50b20();
            bVar3 = true;
            lVar9 = lVar2;
          }
          else {
            bVar3 = true;
            lVar9 = lVar2;
          }
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        if (local_68 <= dVar11) {
          local_40[0] = '\0';
          dVar11 = (double)FUN_00d21140();
          if ((local_40[0] != '\0') && (lVar9 != 0)) {
            dVar11 = (double)FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(local_48 + 0xc));
    }
    (**(code **)(*unaff_RDI + 0xdc8))(dVar11,1);
    FUN_00d50b20();
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}


