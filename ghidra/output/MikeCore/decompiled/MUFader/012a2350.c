// Function: FUN_012a2350
// Address: 012a2350
// Size: 2375 bytes
// Class: MUFader


/* WARNING: Removing unreachable block (ram,0x012a2aeb) */
/* WARNING: Removing unreachable block (ram,0x012a2af4) */
/* WARNING: Removing unreachable block (ram,0x012a2714) */
/* WARNING: Removing unreachable block (ram,0x012a2719) */
/* WARNING: Removing unreachable block (ram,0x012a2720) */
/* WARNING: Removing unreachable block (ram,0x012a2729) */
/* WARNING: Removing unreachable block (ram,0x012a2750) */
/* WARNING: Removing unreachable block (ram,0x012a2958) */
/* WARNING: Removing unreachable block (ram,0x012a2961) */
/* WARNING: Removing unreachable block (ram,0x012a2c7a) */
/* WARNING: Removing unreachable block (ram,0x012a2c83) */
/* WARNING: Removing unreachable block (ram,0x012a249f) */
/* WARNING: Removing unreachable block (ram,0x012a24a8) */
/* WARNING: Removing unreachable block (ram,0x012a252d) */
/* WARNING: Removing unreachable block (ram,0x012a2550) */
/* WARNING: Removing unreachable block (ram,0x012a252f) */
/* WARNING: Removing unreachable block (ram,0x012a2552) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_012a2350(pthread_key_t param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_90;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if ((*unaff_RSI != 0) && (*(longlong *)(unaff_RDI + 200) != 0)) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      dVar2 = *(double *)(unaff_RDI + 0xe8);
      fVar1 = *(float *)(unaff_RDI + 0xf8);
      if (NAN(fVar1) || NAN(fVar1)) {
        dVar12 = 0.0;
      }
      else {
        dVar12 = (double)fVar1;
      }
      dVar13 = *(double *)(unaff_RDI + 0xf0) + dVar2;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e9900(*(double *)(unaff_RDI + 0xe8),
                   *(double *)(unaff_RDI + 0xf0) + *(double *)(unaff_RDI + 0xe8));
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
          goto LAB_012a24ad;
        }
      }
      else if (local_70 != 0) {
LAB_012a24ad:
        local_58 = -1;
        local_90 = DAT_023b2568;
        local_38 = 0;
        lVar7 = local_38;
        bVar5 = false;
        while( true ) {
          bVar4 = bVar5;
          local_38 = lVar7;
          lVar7 = (longlong)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(local_70 + 0xc) <= local_58) break;
          lVar9 = *(longlong *)(local_70 + 0x10);
          lVar3 = *(longlong *)(lVar9 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
          pVar10 = (pthread_key_t)lVar9;
          lVar9 = lVar3;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar9 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          lVar7 = local_38;
          bVar5 = bVar4;
          if (*(longlong *)(lVar9 + 200) != 0) {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              dVar16 = *(double *)(unaff_RDI + 0xe8);
              dVar14 = *(double *)(unaff_RDI + 0xf0) + dVar16;
              pvVar6 = _pthread_getspecific(pVar10);
              lVar9 = lVar3;
              if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar9 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              if (NAN(*(float *)(lVar9 + 0xf8))) {
                dVar15 = 0.0;
              }
              else {
                pvVar6 = _pthread_getspecific(pVar10);
                lVar9 = lVar3;
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar9 = *(longlong *)
                           (lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar15 = (double)*(float *)(lVar9 + 0xf8);
              }
              dVar16 = (double)((ulonglong)
                                (SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar2 * dVar2) -
                                SQRT(dVar15 * dVar15 + dVar14 * dVar14 + dVar16 * dVar16)) &
                               _DAT_023908f0);
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
          if (*(longlong *)(unaff_RDI + 200) != 0) {
            pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(longlong *)(local_38 + 200) == 0) goto LAB_012a289a;
LAB_012a28ba:
            pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(longlong *)
                 (*(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a28ba;
LAB_012a289a:
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507970();
          FUN_015084d0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (*(longlong *)(unaff_RDI + 200) != 0) {
            pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(longlong *)(local_38 + 200) == 0) goto LAB_012a2a2d;
LAB_012a2a4d:
            pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(longlong *)
                 (*(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a2a4d;
LAB_012a2a2d:
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508610();
          FUN_015085a0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (*(longlong *)(unaff_RDI + 200) != 0) {
            pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(longlong *)(local_38 + 200) == 0) goto LAB_012a2bbd;
LAB_012a2bdd:
            pVar10 = (pthread_key_t)local_70;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(longlong *)
                 (*(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a2bdd;
LAB_012a2bbd:
            pVar10 = (pthread_key_t)local_70;
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific(pVar10);
          lVar7 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar7 = *(longlong *)(local_48 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_01507f00();
          FUN_01508220();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar11 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
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


