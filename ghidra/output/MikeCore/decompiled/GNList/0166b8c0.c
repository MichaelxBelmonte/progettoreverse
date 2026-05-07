// Function: FUN_0166b8c0
// Address: 0166b8c0
// Size: 4536 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0166c71e) */
/* WARNING: Removing unreachable block (ram,0x0166c727) */
/* WARNING: Removing unreachable block (ram,0x0166bba6) */
/* WARNING: Removing unreachable block (ram,0x0166bbaf) */
/* WARNING: Removing unreachable block (ram,0x0166bd08) */
/* WARNING: Removing unreachable block (ram,0x0166bd11) */
/* WARNING: Removing unreachable block (ram,0x0166ca6f) */
/* WARNING: Removing unreachable block (ram,0x0166ca7c) */
/* WARNING: Removing unreachable block (ram,0x0166c777) */
/* WARNING: Removing unreachable block (ram,0x0166c794) */
/* WARNING: Removing unreachable block (ram,0x0166bbda) */
/* WARNING: Removing unreachable block (ram,0x0166bbf7) */
/* WARNING: Removing unreachable block (ram,0x0166bbdc) */
/* WARNING: Removing unreachable block (ram,0x0166bbf9) */
/* WARNING: Removing unreachable block (ram,0x0166c779) */
/* WARNING: Removing unreachable block (ram,0x0166c796) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0166b8c0(undefined8 *******param_1)

{
  undefined8 *******pppppppuVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *******pppppppuVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 *******pppppppuVar12;
  bool bVar13;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 *******local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_a0;
  char local_98;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *******local_68;
  char local_60;
  int local_50;
  
  pppppppuVar12 = local_68;
  if (*(longlong *)(unaff_RDI + 0xf0) == 0) {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00115cd0();
    param_1 = (undefined8 *******)&DAT_025f50e8;
    *puVar7 = &DAT_025f50e8;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    (*DAT_025f5100)();
    FUN_01660e50();
    FUN_00d50b20();
  }
  else if (*(char *)(unaff_RDI + 0xe8) != '\0') {
    if ((((*(double *)(unaff_RDI + 0xc0) != *(double *)(unaff_RDI + 200)) ||
         (NAN(*(double *)(unaff_RDI + 0xc0)) || NAN(*(double *)(unaff_RDI + 200)))) ||
        (*(longlong *)(unaff_RDI + 0xd0) != *(longlong *)(unaff_RDI + 0xd8))) ||
       (*(int *)(unaff_RDI + 0xe0) != *(int *)(unaff_RDI + 0xe4))) {
      iVar6 = FUN_00e31390();
      if ((iVar6 != 0) || (*(longlong *)(unaff_RDI + 0xd0) != 0)) {
        FUN_01662650();
        pppppppuVar1 = *(undefined8 ********)(unaff_RDI + 0x120);
        pppppppuVar9 = pppppppuVar1;
        if (pppppppuVar1 != local_68) {
          pppppppuVar9 = local_68;
          if (local_60 == '\0') {
            if (local_68 == (undefined8 *******)0x0) {
              pppppppuVar9 = (undefined8 *******)0x0;
              goto LAB_0166b9ea;
            }
            FUN_00d50b00();
            pppppppuVar1 = *(undefined8 ********)(unaff_RDI + 0x120);
            *(undefined8 ********)(unaff_RDI + 0x120) = local_68;
          }
          else {
            local_60 = '\0';
LAB_0166b9ea:
            *(undefined8 ********)(unaff_RDI + 0x120) = pppppppuVar9;
          }
          if (pppppppuVar1 != (undefined8 *******)0x0) {
            FUN_00d50b20();
            pppppppuVar9 = local_68;
          }
        }
        if ((local_60 != '\0') && (pppppppuVar9 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00115cd0();
        param_1 = (undefined8 *******)&DAT_025f50e8;
        *puVar7 = &DAT_025f50e8;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        (*DAT_025f5100)();
        FUN_01660e50();
        FUN_00d50b20();
        FUN_0184a0e0();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 0xe8) = 0;
    }
  }
  if (*(longlong *)(unaff_RDI + 0x130) == 0) {
    FUN_01664ba0();
  }
  if (unaff_SIL != '\0') {
    return;
  }
  iVar6 = FUN_00e31390();
  if ((((iVar6 == 0) || (*(double *)(unaff_RDI + 0xc0) <= 0.0)) ||
      (*(longlong *)(unaff_RDI + 0xd0) < 1)) ||
     ((*(int *)(unaff_RDI + 0xe0) == 0 || (*(char *)(unaff_RDI + 0x104) != '\0'))))
  goto LAB_0166c8a8;
  pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124e100();
  if (local_60 == '\0') {
    if (local_68 != (undefined8 *******)0x0) {
      FUN_00d50b00();
      goto LAB_0166bbb4;
    }
LAB_0166bc5f:
    if (*(longlong *)(unaff_RDI + 0x120) == 0) {
      cVar5 = FUN_01667df0();
      if ((cVar5 == '\0') &&
         ((*(char *)(unaff_RDI + 0x11c) != '\0' || (cVar5 = FUN_0166d280(), cVar5 != '\0')))) {
        FUN_0141b1a0();
        if (local_68 == (undefined8 *******)0x0) {
          pppppppuVar12 = (undefined8 *******)0x0;
          bVar3 = false;
        }
        else {
          bVar3 = true;
          pppppppuVar12 = local_68;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        uVar4 = 0;
        goto LAB_0166bd21;
      }
      goto LAB_0166bca3;
    }
    uVar4 = FUN_0166d280();
    pppppppuVar12 = *(undefined8 ********)(unaff_RDI + 0x120);
    if (pppppppuVar12 == (undefined8 *******)0x0) goto LAB_0166bca3;
    FUN_00d50b00();
    bVar3 = true;
LAB_0166bd21:
    pVar11 = (pthread_key_t)param_1;
    if (pppppppuVar12 == (undefined8 *******)0x0) {
      bVar13 = true;
    }
    else {
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      if (local_68 == (undefined8 *******)0x0) {
        bVar13 = true;
      }
      else {
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124df10();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_016c2e90();
        bVar13 = iVar6 == 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        FUN_01669ad0();
      }
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      if (local_68 == (undefined8 *******)0x0) {
        bVar13 = true;
      }
      else {
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124df10();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eb60();
        pvVar8 = _pthread_getspecific(pVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_018232b0();
        if (iVar6 == 0) {
          bVar13 = true;
        }
        else {
          pvVar8 = _pthread_getspecific(pVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124df10();
          pvVar8 = _pthread_getspecific(pVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0132d900();
          pvVar8 = _pthread_getspecific(pVar11);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01510030();
          if (local_170 == 0) {
            bVar13 = true;
          }
          else {
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d900();
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01510030();
            pvVar8 = _pthread_getspecific(pVar11);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar6 = FUN_0124ae30();
            bVar13 = iVar6 == 0;
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        FUN_0166a440();
      }
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510280();
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_018847d0();
      if ((local_60 != '\0') && (local_68 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (iVar6 == 0) {
        FUN_0166b030();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0xa0);
      FUN_00d50b00();
      local_e8 = '\0';
      param_1 = &local_f0;
      local_f0 = pppppppuVar12;
      (**(code **)(*plVar2 + 0x380))(param_1,*(undefined1 *)(unaff_RDI + 0x105),uVar4);
      if ((local_e8 != '\0') && (local_f0 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      bVar13 = false;
    }
  }
  else {
    if (local_68 == (undefined8 *******)0x0) goto LAB_0166bc5f;
LAB_0166bbb4:
    local_60 = '\0';
    local_68 = (undefined8 *******)0x0;
    local_50 = -1;
    do {
      lVar10 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((longlong)pppppppuVar12 + 0xc) <= local_50) {
        FUN_00540b60();
        FUN_00d50b20();
        param_1 = pppppppuVar12;
        goto LAB_0166bc5f;
      }
      param_1 = (undefined8 *******)pppppppuVar12[2];
      local_68 = (undefined8 *******)param_1[lVar10 + 1];
      cVar5 = FUN_00e34d40();
    } while ((cVar5 == '\0') && (cVar5 = FUN_00e34a50(), cVar5 != '\0'));
    FUN_00540b60();
    FUN_00d50b20();
LAB_0166bca3:
    bVar13 = true;
    bVar3 = false;
  }
  pppppppuVar12 = local_68;
  *(undefined1 *)(unaff_RDI + 0x105) = 0;
  if (*(int *)(*(longlong *)(unaff_RDI + 0xa8) + 0xc) != 0) {
    pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124c6e0();
    if (local_60 == '\0') {
      if (local_68 != (undefined8 *******)0x0) {
        FUN_00d50b00();
        goto LAB_0166c72c;
      }
    }
    else if (local_68 != (undefined8 *******)0x0) {
LAB_0166c72c:
      local_60 = '\0';
      local_68 = (undefined8 *******)0x0;
      local_50 = -1;
      while( true ) {
        lVar10 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((longlong)pppppppuVar12 + 0xc) <= local_50) break;
        local_68 = (undefined8 *******)pppppppuVar12[2][lVar10 + 1];
        pvVar8 = _pthread_getspecific((pthread_key_t)pppppppuVar12[2]);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = '\0';
        local_e0 = (longlong *)0x0;
        local_d0 = (longlong *)0x0;
        local_c8 = '\0';
        FUN_01397bb0(0,&local_d0);
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          (**(code **)(*local_d0 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          (**(code **)(*local_e0 + 0x10))();
          FUN_00d50b20();
        }
      }
      FUN_00115190();
      FUN_00d50b20();
      param_1 = pppppppuVar12;
    }
  }
  if (bVar3 && !bVar13) {
    FUN_00d50b20();
  }
LAB_0166c8a8:
  if (*(char *)(unaff_RDI + 0xe9) != '\0') {
    FUN_0167ab60();
    pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537ab0();
    if ((local_60 == '\0') && (local_68 != (undefined8 *******)0x0)) {
      FUN_00d50b00();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != (undefined8 *******)0x0) {
      if (0 < *(int *)((longlong)local_68 + 0xc)) {
        iVar6 = 0;
        do {
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50b00();
          param_1 = (undefined8 *******)((longlong)&MACH_HEADER.magic + 1);
          FUN_01710690(1,1);
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)((longlong)local_68 + 0xc));
      }
      FUN_0166fd40();
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0xe9) = 0;
  }
  FUN_01733c30();
  return;
}


