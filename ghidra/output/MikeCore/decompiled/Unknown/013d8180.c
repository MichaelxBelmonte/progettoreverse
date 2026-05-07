// Function: FUN_013d8180
// Address: 013d8180
// Size: 2634 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013d8a18) */
/* WARNING: Removing unreachable block (ram,0x013d8a1d) */
/* WARNING: Removing unreachable block (ram,0x013d8b5e) */
/* WARNING: Removing unreachable block (ram,0x013d8b67) */
/* WARNING: Removing unreachable block (ram,0x013d8b99) */
/* WARNING: Removing unreachable block (ram,0x013d8ba2) */
/* WARNING: Removing unreachable block (ram,0x013d898c) */
/* WARNING: Removing unreachable block (ram,0x013d8991) */
/* WARNING: Removing unreachable block (ram,0x013d8b3f) */
/* WARNING: Removing unreachable block (ram,0x013d8b44) */
/* WARNING: Removing unreachable block (ram,0x013d8ac9) */
/* WARNING: Removing unreachable block (ram,0x013d8ace) */
/* WARNING: Removing unreachable block (ram,0x013d8ae8) */
/* WARNING: Removing unreachable block (ram,0x013d8af1) */
/* WARNING: Removing unreachable block (ram,0x013d8be5) */
/* WARNING: Removing unreachable block (ram,0x013d8bea) */
/* WARNING: Removing unreachable block (ram,0x013d8a8e) */
/* WARNING: Removing unreachable block (ram,0x013d8a93) */
/* WARNING: Removing unreachable block (ram,0x013d8a53) */
/* WARNING: Removing unreachable block (ram,0x013d8a58) */
/* WARNING: Removing unreachable block (ram,0x013d8a72) */
/* WARNING: Removing unreachable block (ram,0x013d8a7b) */
/* WARNING: Removing unreachable block (ram,0x013d8bb5) */
/* WARNING: Removing unreachable block (ram,0x013d8bba) */
/* WARNING: Removing unreachable block (ram,0x013d8c15) */
/* WARNING: Removing unreachable block (ram,0x013d8c1a) */
/* WARNING: Removing unreachable block (ram,0x013d8b04) */
/* WARNING: Removing unreachable block (ram,0x013d8b09) */
/* WARNING: Removing unreachable block (ram,0x013d8b7a) */
/* WARNING: Removing unreachable block (ram,0x013d8b7f) */
/* WARNING: Removing unreachable block (ram,0x013d8a37) */
/* WARNING: Removing unreachable block (ram,0x013d8a40) */
/* WARNING: Removing unreachable block (ram,0x013d8b23) */
/* WARNING: Removing unreachable block (ram,0x013d8b2c) */
/* WARNING: Removing unreachable block (ram,0x013d8c00) */
/* WARNING: Removing unreachable block (ram,0x013d8c05) */
/* WARNING: Removing unreachable block (ram,0x013d8bd0) */
/* WARNING: Removing unreachable block (ram,0x013d8bd5) */
/* WARNING: Removing unreachable block (ram,0x013d8c30) */
/* WARNING: Removing unreachable block (ram,0x013d8c35) */
/* WARNING: Removing unreachable block (ram,0x013d899f) */
/* WARNING: Removing unreachable block (ram,0x013d89a4) */
/* WARNING: Removing unreachable block (ram,0x013d8aad) */
/* WARNING: Removing unreachable block (ram,0x013d8ab6) */

ulonglong FUN_013d8180(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  lVar3 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar9 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar9 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x40);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(lVar3 + 0xc) == *(int *)(lVar9 + 0xc)) {
    if (*(int *)(lVar3 + 0xc) < 1) {
      uVar10 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    }
    else {
      lVar6 = 0;
      do {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = FUN_013de650();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar8 = FUN_013de650();
        if (lVar7 != lVar8) {
LAB_013d8c3d:
          uVar10 = 0;
          goto joined_r0x013d8c43;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = FUN_013de790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar8 = FUN_013de790();
        if (lVar7 != lVar8) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = FUN_013deb20();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar8 = FUN_013deb20();
        if (lVar7 != lVar8) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_013de410();
        if (cVar4 != '\0') {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_013de410();
          if (cVar4 == '\0') goto LAB_013d8c3d;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_013de410();
        if (cVar4 == '\0') {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_013de410();
          if (cVar4 != '\0') goto LAB_013d8c3d;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_013de410();
        if (cVar4 != '\0') {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_013de410();
          if (cVar4 != '\0') {
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar12 = (float)FUN_013de3b0();
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar13 = (float)FUN_013de3b0();
            if ((fVar12 != fVar13) || (NAN(fVar12) || NAN(fVar13))) goto LAB_013d8c3d;
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df790();
        iVar1 = *(int *)(local_60 + 0xc);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df790();
        iVar2 = *(int *)(local_70 + 0xc);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar1 != iVar2) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5de0();
        if (local_60 == 0) {
          bVar11 = false;
        }
        else {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5de0();
          bVar11 = local_70 == 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5de0();
        if (local_60 == 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5de0();
          bVar11 = local_70 != 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar11 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if (local_60 == 0) {
          bVar11 = false;
        }
        else {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          bVar11 = local_70 == 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) goto LAB_013d8c3d;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if (local_60 == 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          uVar10 = CONCAT71(0x28025,local_70 != 0);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar10 = 0;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      } while (((char)uVar10 == '\0') && (lVar6 = lVar6 + 1, lVar6 < *(int *)(lVar3 + 0xc)));
      uVar10 = uVar10 ^ 1;
    }
  }
  else {
    uVar10 = 0;
  }
joined_r0x013d8c43:
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return uVar10 & 0xffffffff;
}


