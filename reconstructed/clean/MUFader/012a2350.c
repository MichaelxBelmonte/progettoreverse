// Function: FUN_012a2350
// Address: 012a2350
// Size: 2375 bytes
// Class: MUFader

uint64_t FUN_012a2350(void* param_1)

{
  float fVar1;
  double dVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  uint64_t uVar11;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_90;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if ((*arg1 != 0) && (*(int64_t *)(this_ptr + 200) != 0)) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      dVar2 = *(double *)(this_ptr + 0xe8);
      fVar1 = *(float *)(this_ptr + 0xf8);
      if (NAN(fVar1) || NAN(fVar1)) {
        dVar12 = 0.0;
      }
      else {
        dVar12 = (double)fVar1;
      }
      dVar13 = *(double *)(this_ptr + 0xf0) + dVar2;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e9900(*(double *)(this_ptr + 0xe8),
                   *(double *)(this_ptr + 0xf0) + *(double *)(this_ptr + 0xe8));
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
          goto LAB_012a24ad;
        }
      }
      else if (local_70 != 0) {
LAB_012a24ad:
        local_58 = -1;
        local_90 = g_023b2568;
        local_38 = 0;
        lVar7 = local_38;
        bVar5 = false;
        while( true ) {
          bVar4 = bVar5;
          local_38 = lVar7;
          lVar7 = (int64_t)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(local_70 + 0xc) <= local_58) break;
          lVar9 = *(int64_t *)(local_70 + 0x10);
          lVar3 = *(int64_t *)(lVar9 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific((void*)lVar9);
          pVar10 = (void*)lVar9;
          lVar9 = lVar3;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar9 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          lVar7 = local_38;
          bVar5 = bVar4;
          if (*(int64_t *)(lVar9 + 200) != 0) {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              dVar16 = *(double *)(this_ptr + 0xe8);
              dVar14 = *(double *)(this_ptr + 0xf0) + dVar16;
              pvVar6 = _pthread_getspecific(pVar10);
              lVar9 = lVar3;
              if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar9 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              if (NAN(*(float *)(lVar9 + 0xf8))) {
                dVar15 = 0.0;
              }
              else {
                pvVar6 = _pthread_getspecific(pVar10);
                lVar9 = lVar3;
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar9 = *(int64_t *)
                           (lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar15 = (double)*(float *)(lVar9 + 0xf8);
              }
              dVar16 = (double)((uint64_t)
                                (SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar2 * dVar2) -
                                SQRT(dVar15 * dVar15 + dVar14 * dVar14 + dVar16 * dVar16)) &
                               g_023908f0);
              if (dVar16 < local_90) {
                local_90 = dVar16;
                if (lVar3 == local_38) {
                  if ((!bVar4) && (lVar3 != 0)) {
                    FUN_00d50b00();
                    bVar5 = true;
                  }
                }
                else {
                  if (lVar3 != 0) {
                    FUN_00d50b00();
                  }
                  bVar5 = true;
                  lVar7 = lVar3;
                  if ((bVar4) && (local_38 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        if (local_38 != 0) {
          if (*(int64_t *)(this_ptr + 200) != 0) {
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(int64_t *)(local_38 + 200) == 0) goto LAB_012a289a;
LAB_012a28ba:
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(int64_t *)
                 (*(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a28ba;
LAB_012a289a:
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507970();
          FUN_015084d0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 200) != 0) {
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(int64_t *)(local_38 + 200) == 0) goto LAB_012a2a2d;
LAB_012a2a4d:
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(int64_t *)
                 (*(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a2a4d;
LAB_012a2a2d:
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508610();
          FUN_015085a0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 200) != 0) {
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(int64_t *)(local_38 + 200) == 0) goto LAB_012a2bbd;
LAB_012a2bdd:
            pVar10 = (void*)local_70;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(int64_t *)
                 (*(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a2bdd;
LAB_012a2bbd:
            pVar10 = (void*)local_70;
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific(pVar10);
          lVar7 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar7 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_01507f00();
          FUN_01508220();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar11 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          if (bVar4) {
            FUN_00d50b20();
          }
          goto LAB_012a2810;
        }
      }
    }
  }
  uVar11 = 0;
LAB_012a2810:
  return uVar11 & 0xffffffff;
}

