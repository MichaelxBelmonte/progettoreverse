// Function: FUN_0008d170
// Address: 0008d170
// Size: 2287 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x0008d8e0) */
/* WARNING: Removing unreachable block (ram,0x0008d8ec) */
/* WARNING: Removing unreachable block (ram,0x0008d8fa) */
/* WARNING: Removing unreachable block (ram,0x0008d906) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0008d170(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double local_80;
  char local_70;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar2 = (longlong *)unaff_RDI[0x1e];
  if (plVar2 == (longlong *)0x0) {
    uVar12 = 0;
    goto LAB_0008da55;
  }
  FUN_00d50b00();
  uVar12 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (param_2 != '\0') {
    FUN_00d50b00();
    local_38[0] = '\0';
    plVar13 = unaff_RDI;
    plVar14 = unaff_RDI;
    do {
      (**(code **)(*plVar13 + 0x370))();
      plVar11 = local_48;
      if (local_48 == plVar13) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) &&
           (plVar11 = plVar13, local_40[0] != '\0')) goto LAB_0008d237;
      }
      else {
        plVar14 = plVar11;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar7 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar7 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_0008d237:
          local_38[0] = '\x01';
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
        plVar13 = plVar11;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar11 = &DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar11 = (longlong *)&stack0xffffffffffffff88;
        if (cVar5 == '\0') {
          plVar11 = &DAT_02802688;
        }
      }
      if (*plVar11 != 0) {
        if ((local_38[0] == '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar13 != (longlong *)0x0);
    uVar12 = 0x2802601;
    FUN_00d50b20();
    if (plVar13 != (longlong *)0x0) {
      FUN_0078e590();
    }
    dVar1 = (double)unaff_RDI[0x22];
    FUN_01caea70();
    if (local_48 == (longlong *)0x0) {
      cVar5 = '\0';
    }
    else {
      FUN_01caea70();
      cVar5 = FUN_00d8ca50();
      if ((local_70 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      fVar16 = (float)FUN_01caeac0();
      dVar20 = (double)fVar16;
    }
    else {
      fVar15 = (float)FUN_01caeac0();
      fVar16 = DAT_023908d8;
      if (DAT_023908d8 <= fVar15) {
        fVar16 = fVar15;
      }
      fVar15 = DAT_023908dc;
      if (fVar16 <= DAT_023908dc) {
        fVar15 = fVar16;
      }
      dVar20 = (double)(fVar15 / DAT_023908e0) * (double)unaff_RDI[0x22];
    }
    iVar6 = FUN_01caecd0();
    uVar17 = SUB84(DAT_023908b8,0);
    uVar18 = (undefined4)((ulonglong)DAT_023908b8 >> 0x20);
    if (DAT_023908b8 <= dVar20) {
      uVar17 = SUB84(dVar20,0);
      uVar18 = (undefined4)((ulonglong)dVar20 >> 0x20);
    }
    dVar20 = DAT_023908c0;
    if ((double)CONCAT44(uVar18,uVar17) <= DAT_023908c0) {
      dVar20 = (double)CONCAT44(uVar18,uVar17);
    }
    if ((iVar6 == 2) || (iVar6 = FUN_01caecd0(), iVar6 == 1)) {
      fVar16 = DAT_02390124;
      if (DAT_0238fee8 <= (double)((ulonglong)(dVar20 - dVar1) & _DAT_023908f0)) {
        fVar16 = (float)(dVar20 / dVar1);
      }
      (**(code **)(*plVar2 + 0x490))(fVar16);
LAB_0008d45d:
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      local_38[0] = '\0';
      plVar14 = unaff_RDI;
      do {
        (**(code **)(*plVar14 + 0x370))();
        plVar11 = local_48;
        if (local_48 == plVar14) {
          if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_0008d4f7;
          }
        }
        else {
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar7 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar7 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar14 = plVar11;
LAB_0008d4f7:
            local_38[0] = '\x01';
            pcVar7 = local_40;
            plVar11 = plVar14;
          }
          *pcVar7 = '\0';
          plVar14 = plVar11;
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((DAT_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          _DAT_026e0ab8 = FUN_00015ff0();
          _DAT_026e0aa0 = "MDMetaWindowController";
          _DAT_026e0aa8 = 0x198;
          _DAT_026e0ab0 = FUN_0006dea0;
          _DAT_026e0ac0 = 0;
          uRam00000000026e0ac8 = 0;
          _DAT_026e0ad0 = 0;
          _DAT_026e0b48 = 0;
          uRam00000000026e0b50 = 0;
          _DAT_026e0b58 = 0;
          DAT_026e0b5a = 1;
          _DAT_026e0ad8 = 0;
          uRam00000000026e0ae0 = 0;
          _DAT_026e0ae8 = 0;
          uRam00000000026e0af0 = 0;
          _DAT_026e0af8 = 0;
          uRam00000000026e0b00 = 0;
          _DAT_026e0b08 = 0;
          uRam00000000026e0b10 = 0;
          _DAT_026e0b18 = 0;
          uRam00000000026e0b20 = 0;
          _DAT_026e0b28 = 0;
          uRam00000000026e0b30 = 0;
          _DAT_026e0b38 = 0;
          uRam00000000026e0b40 = 0;
          DAT_026e0b63 = 0;
          _DAT_026e0b5b = 0;
          ___cxa_guard_release();
        }
        plVar11 = &DAT_02802688;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x360))();
          cVar5 = FUN_00e85ea0();
          plVar11 = (longlong *)&stack0xffffffffffffff88;
          if (cVar5 == '\0') {
            plVar11 = &DAT_02802688;
          }
        }
        if (*plVar11 != 0) {
          if ((local_38[0] == '\0') && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          goto LAB_0008d675;
        }
      } while (plVar14 != (longlong *)0x0);
      plVar14 = (longlong *)0x0;
LAB_0008d675:
      pVar10 = (pthread_key_t)plVar11;
      uVar12 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
      FUN_00d50b20();
      if (plVar14 != (longlong *)0x0) {
        FUN_006577f0();
        plVar14 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0008d6cd;
          }
LAB_0008d727:
          bVar4 = true;
        }
        else {
          if (local_48 == (longlong *)0x0) goto LAB_0008d727;
LAB_0008d6cd:
          pvVar8 = _pthread_getspecific(pVar10);
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pVar10 = (pthread_key_t)plVar14;
          }
          FUN_012caf10();
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0008d756;
            }
LAB_0008d83e:
            bVar4 = true;
          }
          else {
            if (local_48 == (longlong *)0x0) goto LAB_0008d83e;
LAB_0008d756:
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            (**(code **)(*plVar2 + 0x408))();
            uVar17 = FUN_016c25f0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            (**(code **)(*plVar2 + 0x418))();
            uVar18 = FUN_016c25f0();
            cVar5 = (**(code **)(*plVar2 + 0x398))();
            if (cVar5 == '\0') {
              local_80 = DAT_023908c8;
            }
            else {
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              (**(code **)(*plVar2 + 0x3b0))();
              local_80 = (double)FUN_016c25f0();
              (**(code **)(*plVar2 + 0x390))();
            }
            (**(code **)(*plVar2 + 0x490))(DAT_02390124);
            uVar19 = (**(code **)(*plVar2 + 0x3b0))();
            FUN_01c42b30(uVar19,dVar20);
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar17 = FUN_016c26c0(uVar17);
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar3 = FUN_016c26c0(uVar18);
            (**(code **)(*plVar2 + 0x428))(uVar17,uVar3);
            if (!NAN(local_80)) {
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar9 = FUN_016c26c0(SUB84(local_80,0));
              unaff_RDI[0x24] = lVar9;
            }
            (**(code **)(*plVar2 + 0x3b0))();
            FUN_00088bb0();
            bVar4 = false;
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (!bVar4) goto LAB_0008d45d;
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar12 = 0;
    }
  }
  FUN_00d50b20();
LAB_0008da55:
  return uVar12 & 0xffffffff;
}


