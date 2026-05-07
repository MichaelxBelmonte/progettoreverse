// Function: FUN_01266200
// Address: 01266200
// Size: 543 bytes
// Class: MUSampledFunction


double FUN_01266200(undefined8 param_1)

{
  double *pdVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong *unaff_RDI;
  longlong lVar13;
  longlong local_58;
  char local_50 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
  pcVar11 = local_38;
  if (local_50[0] != '\0') {
    pcVar11 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar11 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    local_40 = *(double *)(local_58 + 0xe8);
  }
  else {
    local_40 = *(double *)
                (*(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                0xe8);
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = *(uint *)(*unaff_RDI + 0xc);
  if ((int)uVar2 < 2) {
    return local_40;
  }
  lVar9 = (ulonglong)uVar2 - 2;
  lVar13 = 0;
  lVar12 = 0;
  bVar4 = false;
  bVar3 = false;
  lVar6 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + 8);
  lVar10 = lVar9;
  if (lVar6 != 0) goto LAB_0126630f;
  do {
    lVar6 = lVar12;
    if ((!bVar4) && (lVar12 != 0)) {
      FUN_00d50b00();
      bVar4 = true;
    }
LAB_01266370:
    bVar3 = bVar4;
    lVar12 = lVar6;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
      if (*(double *)(lVar12 + 0xe8) <= local_40 && local_40 != *(double *)(lVar12 + 0xe8))
      goto LAB_012663c2;
    }
    else {
      pdVar1 = (double *)
               (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0xe8)
      ;
      if (*pdVar1 <= local_40 && local_40 != *pdVar1) {
LAB_012663c2:
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
        lVar6 = lVar12;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar6 + 0xe8);
      }
    }
    if (lVar9 == lVar13) {
      if (!bVar3) {
        return local_40;
      }
      if (lVar12 == 0) {
        return local_40;
      }
      FUN_00d50b20();
      return local_40;
    }
    lVar13 = lVar13 + 1;
    lVar6 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + 8 + lVar13 * 8);
    bVar4 = bVar3;
  } while (lVar12 == lVar6);
LAB_0126630f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  bVar4 = true;
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_01266370;
}


