// Function: FUN_012ec4a0
// Address: 012ec4a0
// Size: 2143 bytes
// Class: MULSSGenerator

void FUN_012ec4a0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t this_ptr;
  int iVar8;
  void* pVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int64_t local_b8;
  char local_b0;
  double local_40;
  double local_38;
  
  if (*(char *)(this_ptr + 0x6b) != '\0') {
    return;
  }
  *(void*)(this_ptr + 0x6b) = 1;
  dVar11 = (double)FUN_012f7cb0();
  dVar12 = (double)FUN_012f7cb0();
  dVar13 = (double)FUN_012f7d90();
  iVar8 = 0;
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    pVar9 = 0;
    lVar6 = *(int64_t *)(this_ptr + 0xb0);
    if (lVar6 != 0) goto LAB_012ec5a1;
LAB_012ecc8f:
    local_40 = 0.0;
    local_38 = 0.0;
    if ((*(double *)(this_ptr + 0x78) == 0.0) && (!NAN(*(double *)(this_ptr + 0x78))))
    goto LAB_012ecd00;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar3 = FUN_016572c0();
    pVar9 = 2 - bVar3;
    if (*(int64_t *)(this_ptr + 0x60) != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar3 = FUN_01657320();
      iVar8 = 2 - (uint)bVar3;
    }
    lVar6 = *(int64_t *)(this_ptr + 0xb0);
    if (lVar6 == 0) goto LAB_012ecc8f;
LAB_012ec5a1:
    if (*(int *)(lVar6 + 0xc) < 1) {
      local_40 = 0.0;
      local_38 = 0.0;
    }
    else {
      dVar12 = dVar12 + dVar13;
      dVar16 = dVar11 + g_0240d350;
      dVar13 = g_0240d350 + dVar12;
      local_38 = 0.0;
      iVar10 = 0;
      local_40 = 0.0;
      do {
        pVar7 = pVar9;
        dVar14 = local_38;
        if (pVar9 == 1) {
          pvVar5 = _pthread_getspecific(1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129aaf0();
          if (cVar4 == '\0') goto joined_r0x012ec797;
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129adc0();
          pVar7 = 0x2802558;
          if (cVar4 == '\0') {
            pvVar5 = _pthread_getspecific(0x2802558);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_012648e0();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b5c0(dVar16);
            dVar14 = g_0240d2e8;
            if (dVar11 - dVar15 <= g_0240d2e8) {
              dVar14 = dVar11 - dVar15;
            }
            if (dVar14 <= local_38) {
              dVar14 = local_38;
            }
joined_r0x012ec8c4:
            bVar2 = true;
            local_38 = dVar14;
          }
          else {
            pvVar5 = _pthread_getspecific(0x2802558);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_012648e0();
            dVar14 = dVar11 - dVar15;
            if (local_38 < dVar11 - dVar15) goto joined_r0x012ec797;
            bVar2 = false;
          }
          if (iVar8 == 2) goto LAB_012ec79d;
LAB_012ec8ca:
          if (iVar8 != 1) goto LAB_012ec970;
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129ac30();
          if (cVar4 == '\0') goto LAB_012ec970;
          if (pVar9 == 1) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129aeb0();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if (local_b8 != 0) {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              bVar1 = true;
              FUN_0129b630(dVar13);
              goto LAB_012ec972;
            }
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_012648f0();
          dVar14 = dVar14 - dVar12;
          bVar1 = g_0240d2e8 < dVar14;
          if (g_0240d2e8 < dVar14) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b630(dVar12);
            dVar14 = g_0240d2e8;
          }
          if (local_40 < dVar14) {
            local_40 = dVar14;
          }
        }
        else {
          if (pVar9 == 2) {
            pvVar5 = _pthread_getspecific(2);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0129aaf0();
            if (cVar4 != '\0') {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0129b5c0(dVar16);
              goto joined_r0x012ec8c4;
            }
          }
joined_r0x012ec797:
          local_38 = dVar14;
          bVar2 = false;
          if (iVar8 != 2) goto LAB_012ec8ca;
LAB_012ec79d:
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129ac30();
          if (cVar4 != '\0') {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar1 = true;
            FUN_0129b630(dVar12);
            goto LAB_012ec972;
          }
LAB_012ec970:
          bVar1 = false;
        }
LAB_012ec972:
        if (!bVar2) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_0129b5b0();
          if (!NAN(dVar14)) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b5c0(g_023908c8);
          }
        }
        if (!bVar1) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_0129b620();
          if (!NAN(dVar14)) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b630(g_023908c8);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar6 + 0xc));
    }
    FUN_001159b0();
    if ((local_38 == *(double *)(this_ptr + 0x78)) &&
       (!NAN(local_38) && !NAN(*(double *)(this_ptr + 0x78)))) goto LAB_012ecd00;
  }
  FUN_00d64850();
  *(double *)(this_ptr + 0x78) = local_38;
  FUN_00d64910();
LAB_012ecd00:
  if ((local_40 != *(double *)(this_ptr + 0x80)) ||
     (NAN(local_40) || NAN(*(double *)(this_ptr + 0x80)))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x80) = local_40;
    FUN_00d64910();
  }
  return;
}

