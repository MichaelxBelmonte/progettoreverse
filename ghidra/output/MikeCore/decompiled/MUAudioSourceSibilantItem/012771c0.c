// Function: FUN_012771c0
// Address: 012771c0
// Size: 3613 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x01277dc1) */
/* WARNING: Removing unreachable block (ram,0x01277dcd) */
/* WARNING: Removing unreachable block (ram,0x01277f8d) */
/* WARNING: Removing unreachable block (ram,0x01277f99) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012771c0(double param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  pthread_key_t pVar14;
  longlong *in_RCX;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  longlong local_d8;
  char local_d0;
  double local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  plVar15 = in_RCX;
  local_38 = (longlong *)FUN_000bea40();
  pVar14 = (pthread_key_t)plVar15;
  (**(code **)(*local_38 + 0x18))();
  plVar15 = (longlong *)*in_RCX;
  if (plVar15 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      plVar15 = (longlong *)*in_RCX;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar15 = (longlong *)plVar15[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    pplVar18 = &local_48;
    (**(code **)(*plVar15 + 0x378))();
    plVar15 = local_48;
    FUN_01131770();
    if (plVar15 == (longlong *)0x0) {
LAB_0127727c:
      pplVar18 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar15 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_0127727c;
    }
    local_50 = *pplVar18;
    if (*(char *)(pplVar18 + 1) == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar18 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01266770();
  plVar15 = local_48;
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01266b80();
  plVar6 = local_48;
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar16 = 0;
  FUN_004f2260(0,FUN_012759c0);
  plVar2 = local_48;
  plVar17 = (longlong *)*unaff_RSI;
  if (plVar17 == local_48) {
    if (((char)unaff_RSI[1] == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_012773ab;
      FUN_00d50b00();
      goto LAB_012773e1;
    }
  }
  else {
    lVar10 = unaff_RSI[1];
    if (local_40 != '\0') {
      *unaff_RSI = (longlong)local_48;
      if (((char)lVar10 != '\0') && (plVar17 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_012773ab:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_012773f9;
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RSI = (longlong)plVar2;
    if (((char)lVar10 != '\0') && (plVar17 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_012773e1:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_012773f9:
  plVar17 = (longlong *)CONCAT71((int7)((ulonglong)uVar16 >> 8),!NAN(param_1));
  pVar14 = (pthread_key_t)plVar17;
  lVar10 = *unaff_RSI;
  if (0 < *(int *)(lVar10 + 0xc)) {
    lVar20 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + lVar20 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
      if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        lVar10 = plVar2[0x19];
      }
      else {
        lVar10 = *(longlong *)(plVar2[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 200);
      }
      if (lVar10 != 0) {
        FUN_00d50b00();
        if ((param_2 & !NAN(param_1)) != 0) {
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152e7b0(param_1);
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_0126ee50();
        if (cVar7 == '\0') {
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            if (plVar2[0x1b] == 0) goto LAB_0127758f;
LAB_012775ae:
            pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef490();
          }
          else {
            if (*(longlong *)(plVar2[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xd8) != 0)
            goto LAB_012775ae;
LAB_0127758f:
            local_40 = '\0';
            local_48 = (longlong *)0x0;
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_01326de0();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((iVar8 != 3 || plVar15 == plVar2) || plVar6 == plVar2) goto LAB_0127766f;
        }
        else {
LAB_0127766f:
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          plVar11 = plVar2;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          dVar24 = (double)plVar11[0x1d] + (double)plVar11[0x17];
          pvVar9 = _pthread_getspecific((pthread_key_t)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0152e9b0(param_1);
          pVar14 = (pthread_key_t)plVar17;
          if (local_50 != (longlong *)0x0) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar11 = local_50;
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              plVar17 = local_50;
              plVar11 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            pVar14 = (pthread_key_t)plVar17;
            local_58 = (double)(**(code **)(*plVar11 + 0x3d8))(local_58,1);
          }
          pvVar9 = _pthread_getspecific(pVar14);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar14 = (pthread_key_t)local_38;
          }
          iVar8 = FUN_013f3690(dVar24);
          if (iVar8 == -1) {
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (pthread_key_t)local_38;
            }
            FUN_013f2b00();
            iVar8 = *(int *)((longlong)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar19 = true;
            iVar4 = -(uint)(iVar8 == 0);
          }
          else {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (longlong)iVar8;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (pthread_key_t)lVar10;
            if ((dVar22 != dVar24) || (bVar19 = false, NAN(dVar22) || NAN(dVar24))) {
              if ((dVar23 != local_58) || (bVar19 = false, NAN(dVar23) || NAN(local_58))) {
                dVar22 = (dVar24 - dVar22) / (local_58 - dVar23);
                pVar14 = (pthread_key_t)
                         CONCAT71((int7)((ulonglong)lVar10 >> 8),dVar22 <= _DAT_023b1e98);
                bVar19 = _DAT_023b3498 <= dVar22 && dVar22 <= _DAT_023b1e98;
              }
            }
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (pthread_key_t)local_38;
            }
            FUN_013f2b00();
            iVar1 = *(int *)((longlong)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            iVar4 = iVar8 + 1;
            if (iVar1 + -1 <= iVar8) {
              iVar4 = -1;
            }
          }
          bVar3 = bVar19;
          if ((iVar4 != -1) && (bVar3 = false, bVar19)) {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (longlong)iVar4;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (pthread_key_t)lVar10;
            bVar3 = false;
            if ((dVar24 != dVar22) || (NAN(dVar24) || NAN(dVar22))) {
              if ((local_58 != dVar23) || (NAN(local_58) || NAN(dVar23))) {
                dVar22 = (dVar22 - dVar24) / (dVar23 - local_58);
                pVar14 = (pthread_key_t)
                         CONCAT71((int7)((ulonglong)lVar10 >> 8),dVar22 <= _DAT_023b1e98);
                bVar3 = _DAT_023b3498 <= dVar22 && dVar22 <= _DAT_023b1e98;
              }
            }
          }
          if (bVar3) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar17 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar10 = FUN_00e8b990(), plVar17 = local_38, lVar10 != 0)) {
              plVar17 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar17 + 0x410))(dVar24,local_58);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar10 = *unaff_RSI;
      pVar14 = *(pthread_key_t *)(lVar10 + 0xc);
      plVar17 = (longlong *)(longlong)(int)pVar14;
    } while (lVar20 < (longlong)plVar17);
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  plVar17 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((longlong)*(int *)((longlong)plVar17 + 0xc) != 0) {
    lVar10 = *(longlong *)(plVar17[2] + -8 + (longlong)*(int *)((longlong)plVar17 + 0xc) * 8);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    puVar12 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar14 = 0x25ddb28;
    *puVar12 = &DAT_025ddb28;
    puVar12[0xb] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    *(undefined8 *)((longlong)puVar12 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x4b) = 0;
    pcVar5 = DAT_025ddb40;
    (*DAT_025ddb40)();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + DAT_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + DAT_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar14 = (pthread_key_t)local_38;
    }
    FUN_013f2b30();
    lVar20 = *(longlong *)plVar17[2];
    lVar21 = lVar10;
    if (lVar10 != lVar20) {
      if (lVar20 != 0) {
        FUN_00d50b00();
      }
      lVar21 = lVar20;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &DAT_025ddb28;
    puVar13[0xb] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    *(undefined8 *)((longlong)puVar13 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x4b) = 0;
    (*pcVar5)();
    if (puVar12 == puVar13) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + DAT_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + DAT_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2cf0();
    FUN_00d50b20();
    if (lVar21 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar15 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


