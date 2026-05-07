// Function: FUN_01528a90
// Address: 01528a90
// Size: 1519 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x01528df4) */
/* WARNING: Removing unreachable block (ram,0x01528dfd) */

void FUN_01528a90(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_78;
  char local_70;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_70 == '\0') {
      if (local_78 == 0) goto LAB_01528fda;
      FUN_00d50b00();
    }
    else if (local_78 == 0) goto LAB_01528fda;
    for (iVar4 = 0; pVar9 = (pthread_key_t)param_1, iVar4 < *(int *)(local_78 + 0xc);
        iVar4 = iVar4 + 1) {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_0125a280();
      iVar5 = *(int *)(unaff_RDI + 0x3c);
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_01259520();
      iVar1 = *(int *)(unaff_RDI + 0x3c);
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01259520();
      param_1 = (ulonglong)((int)(dVar12 / (double)iVar1) - (uint)(dVar13 < 0.0));
      FUN_015278a0(param_1,(int)(dVar10 / (double)iVar5) - (uint)(dVar11 < 0.0),1);
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  else if ((*(longlong *)(unaff_RDI + 0x50) != 0) && (iVar4 = FUN_00c8d620(), 0 < iVar4)) {
    iVar5 = 0;
    bVar3 = true;
    do {
      do {
        lVar6 = FUN_00c8df10();
      } while (lVar6 == 0);
      if (!bVar3) break;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        if (*(longlong *)(lVar6 + 0x100) != 0) goto LAB_01528b91;
LAB_01528aea:
        FUN_015287d0();
      }
      else {
        if (*(longlong *)
             (*(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x100)
            == 0) goto LAB_01528aea;
LAB_01528b91:
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(lVar6 + 0x100);
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar8 = *(longlong *)(lVar6 + 0x100);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        pVar9 = (pthread_key_t)param_1;
        if (*(longlong *)(lVar8 + 0x138) != unaff_RDI) goto LAB_01528aea;
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_0125a280();
        iVar1 = *(int *)(unaff_RDI + 0x3c);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar9 = (pthread_key_t)(dVar11 < 0.0);
        dVar12 = (double)FUN_01259520();
        iVar2 = *(int *)(unaff_RDI + 0x3c);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01259520();
        param_1 = (ulonglong)((int)(dVar12 / (double)iVar2) - (uint)(dVar13 < 0.0));
        FUN_015278a0(param_1,(int)(dVar10 / (double)iVar1) - (uint)(dVar11 < 0.0),0,param_4,0);
      }
      iVar5 = iVar5 + 1;
      bVar3 = iVar5 < iVar4;
    } while (iVar5 != iVar4);
  }
LAB_01528fda:
  FUN_00d7a2d0();
  lVar6 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar6 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(lVar6 + 0xc); iVar4 = iVar4 + 1) {
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ad10();
    }
    FUN_0152a5b0();
  }
  FUN_01529100();
  *(undefined1 *)(unaff_RDI + 0x38) = 1;
  return;
}


