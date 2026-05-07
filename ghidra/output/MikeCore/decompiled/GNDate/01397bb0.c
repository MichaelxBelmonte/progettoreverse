// Function: FUN_01397bb0
// Address: 01397bb0
// Size: 3442 bytes
// Class: GNDate


/* WARNING: Removing unreachable block (ram,0x0139810a) */
/* WARNING: Removing unreachable block (ram,0x0139810f) */
/* WARNING: Removing unreachable block (ram,0x01397e10) */
/* WARNING: Removing unreachable block (ram,0x01397e19) */
/* WARNING: Removing unreachable block (ram,0x013980b2) */
/* WARNING: Removing unreachable block (ram,0x013980bb) */
/* WARNING: Removing unreachable block (ram,0x01398323) */
/* WARNING: Removing unreachable block (ram,0x0139832c) */
/* WARNING: Removing unreachable block (ram,0x01398138) */
/* WARNING: Removing unreachable block (ram,0x01398141) */
/* WARNING: Removing unreachable block (ram,0x01397fe2) */
/* WARNING: Removing unreachable block (ram,0x01397feb) */
/* WARNING: Removing unreachable block (ram,0x013983ad) */
/* WARNING: Removing unreachable block (ram,0x013983ba) */
/* WARNING: Removing unreachable block (ram,0x013981f2) */
/* WARNING: Removing unreachable block (ram,0x013981fb) */

void FUN_01397bb0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  char local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined1 local_68;
  uint local_64;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  plVar7 = param_1;
  local_d0 = param_2;
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cbea0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((*(char *)(unaff_RDI + 0xc0) != '\0') && (*(char *)(unaff_RDI + 0x1a8) == '\0')) {
    return;
  }
  FUN_01328810();
  if (local_50 != (longlong *)0x0) {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    local_60 = local_50;
    if (*(char *)(unaff_RDI + 0x1a8) == '\0') goto LAB_01397ebc;
LAB_01397cd2:
    local_58 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    local_64._0_1_ = 0;
LAB_01397ce6:
    local_c8 = *(longlong *)(unaff_RDI + 0x48);
    uVar13 = FUN_01394a40();
    local_c0 = DAT_027bf480;
    if (DAT_027bf480 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_b8 = '\x01';
    (**(code **)(*local_e0 + 0x400))(uVar13,&local_c0);
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (local_d8 != '\0') {
      FUN_00d50b20();
    }
    if (local_c8 != 0) {
      bVar2 = false;
      do {
        (**(code **)(*DAT_028acd20 + 0x368))();
        lVar12 = *(longlong *)(unaff_RDI + 0x48);
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d7a850();
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*DAT_028acd20 + 0x378))();
        if (cVar4 == '\0') {
          (**(code **)(*DAT_028acd20 + 0x368))();
          lVar12 = *(longlong *)(unaff_RDI + 0x48);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          FUN_00d7a410();
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          (**(code **)(*DAT_028acd20 + 0x378))();
          bVar1 = true;
          goto LAB_013980e0;
        }
        plVar7 = (longlong *)*unaff_RSI;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
          cVar4 = (**(code **)(*plVar7 + 0x18))();
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') goto LAB_013984d8;
        }
        bVar2 = true;
        FUN_00da68a0(DAT_023934c8);
      } while( true );
    }
    goto LAB_01398255;
  }
  bVar3 = true;
  local_60 = (longlong *)0x0;
  if (*(char *)(unaff_RDI + 0x1a8) != '\0') goto LAB_01397cd2;
LAB_01397ebc:
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_0141bab0();
    if (iVar5 != 3) goto LAB_01397ed4;
LAB_01397ef1:
    if ((*(longlong *)(unaff_RDI + 0x48) != 0) &&
       ((cVar4 = FUN_01396430(), cVar4 == '\0' || (cVar4 = FUN_013965b0(), cVar4 != '\0')))) {
      local_40 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
LAB_01397f34:
      if (*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc) < 1) {
        local_64._0_1_ = 1;
      }
      else {
        lVar12 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        local_64 = (uint)lVar12;
        lVar8 = 0;
        do {
          pVar9 = (pthread_key_t)lVar12;
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc000();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_64 = local_64 & 0xff;
          if (local_50 == (longlong *)0x0) {
            local_64 = 0;
          }
          else {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          lVar12 = (longlong)*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc);
        } while (lVar8 < lVar12);
      }
      goto LAB_01397ce6;
    }
  }
  else {
LAB_01397ed4:
    cVar4 = FUN_01334f30();
    if (cVar4 != '\0') goto LAB_01397ef1;
  }
  iVar5 = *(int *)((longlong)local_60 + 0xc);
  if (iVar5 < 1) {
    local_40 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
  }
  else {
    lVar12 = 0;
    local_58 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    do {
      pVar9 = (pthread_key_t)plVar7;
      lVar8 = local_60[2];
      plVar11 = *(longlong **)(lVar8 + lVar12 * 8);
      cVar4 = (char)local_40;
      if (local_58 == plVar11) {
        if ((cVar4 == '\0') && (local_58 != (longlong *)0x0)) {
          local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          FUN_00d50b00();
        }
        else if (local_58 == (longlong *)0x0) goto LAB_013983f0;
LAB_0139846b:
        pvVar6 = _pthread_getspecific(pVar9);
        plVar7 = local_58;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar7 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        cVar4 = (**(code **)(*plVar7 + 0x498))();
        plVar7 = local_40;
        if (cVar4 == '\0') goto LAB_01397f34;
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          lVar8 = FUN_00d50b00();
        }
        local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        if ((cVar4 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (pthread_key_t)plVar7;
        local_58 = plVar11;
        if (plVar11 != (longlong *)0x0) goto LAB_0139846b;
LAB_013983f0:
        local_58 = (longlong *)0x0;
      }
      local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff);
      lVar12 = lVar12 + 1;
      iVar5 = *(int *)((longlong)local_60 + 0xc);
    } while (lVar12 < iVar5);
    if (0 < iVar5) {
      lVar12 = 0;
      do {
        plVar11 = *(longlong **)(local_60[2] + lVar12 * 8);
        cVar4 = (char)local_40;
        if (local_58 == plVar11) {
          if ((cVar4 == '\0') && (local_58 != (longlong *)0x0)) {
            local_40 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
            FUN_00d50b00();
          }
          else if (local_58 == (longlong *)0x0) goto LAB_01398580;
LAB_013985fb:
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar7);
          plVar11 = local_58;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar11 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar11 + 0x480))();
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_40 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
          if ((cVar4 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_58 = plVar11;
          if (plVar11 != (longlong *)0x0) goto LAB_013985fb;
LAB_01398580:
          local_58 = (longlong *)0x0;
        }
        lVar12 = lVar12 + 1;
        iVar5 = *(int *)((longlong)local_60 + 0xc);
      } while (lVar12 < iVar5);
    }
  }
  if (iVar5 != 0) {
    FUN_01396e30();
  }
LAB_01398713:
  *(undefined1 *)(unaff_RDI + 0xc0) = 1;
  FUN_01398e20();
LAB_01398723:
  if (!bVar3 && local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_013980e0:
  cVar4 = (**(code **)(*local_50 + 0x398))();
  if (cVar4 == '\0') {
    bVar1 = false;
LAB_01398187:
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    FUN_00ca5c10();
    local_b0 = local_50;
    local_a8 = '\0';
    cVar4 = FUN_00c91c80();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      bVar1 = true;
    }
    FUN_00d50b20();
  }
  else {
    (**(code **)(*local_50 + 0x3c0))();
    if (lVar12 != 0) {
      FUN_00d50b00();
      dVar14 = (double)FUN_00c93980();
      if (dVar14 < DAT_0240d408) {
        (**(code **)(*local_50 + 0x408))();
        bVar1 = false;
      }
      FUN_00d50b20();
    }
    if (!bVar1) goto LAB_01398187;
  }
  if (!bVar1) goto LAB_01398232;
  bVar2 = true;
  FUN_00da68a0(DAT_023934c8);
  goto LAB_013980e0;
LAB_01398232:
  if (((bVar2) && (cVar4 = FUN_01396430(), cVar4 != '\0')) && (*(char *)(unaff_RDI + 0x1a8) == '\0')
     ) {
    if (0 < *(int *)((longlong)local_60 + 0xc)) {
      lVar12 = 0;
      plVar7 = (longlong *)((ulonglong)local_40 & 0xffffffff);
      do {
        lVar8 = local_60[2];
        plVar11 = *(longlong **)(lVar8 + lVar12 * 8);
        plVar10 = local_60;
        if (local_58 == plVar11) {
          plVar11 = local_58;
          if ((char)plVar7 != '\0') {
            local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
            goto LAB_01398820;
          }
          if (local_58 == (longlong *)0x0) {
            local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
            goto LAB_01398820;
          }
          local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          plVar7 = local_60;
          FUN_00d50b00();
          pVar9 = (pthread_key_t)plVar7;
LAB_0139882d:
          pvVar6 = _pthread_getspecific(pVar9);
          plVar7 = local_58;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar7 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          cVar4 = (**(code **)(*plVar7 + 0x498))();
          plVar7 = local_40;
          if (cVar4 == '\0') goto LAB_01398255;
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            lVar8 = FUN_00d50b00();
          }
          local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          if (((char)plVar7 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01398820:
          pVar9 = (pthread_key_t)plVar10;
          local_58 = plVar11;
          if (plVar11 != (longlong *)0x0) goto LAB_0139882d;
          local_58 = (longlong *)0x0;
          plVar7 = (longlong *)((ulonglong)local_40 & 0xffffffff);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((longlong)local_60 + 0xc));
      if (*(int *)((longlong)local_60 + 0xc) < 1) {
        local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
      }
      else {
        lVar12 = 0;
        local_40 = local_60;
        do {
          pVar9 = (pthread_key_t)local_40;
          lVar8 = local_60[2];
          plVar11 = *(longlong **)(lVar8 + lVar12 * 8);
          if (local_58 == plVar11) {
            plVar11 = local_58;
            if ((char)plVar7 != '\0') {
              local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
              goto LAB_01398921;
            }
            if (local_58 == (longlong *)0x0) {
              local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
              goto LAB_01398921;
            }
            local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            FUN_00d50b00();
LAB_0139892e:
            pvVar6 = _pthread_getspecific(pVar9);
            plVar7 = local_58;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar7 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar7 + 0x480))();
          }
          else {
            if (plVar11 != (longlong *)0x0) {
              lVar8 = FUN_00d50b00();
            }
            local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            if (((char)plVar7 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01398921:
            local_58 = plVar11;
            if (plVar11 != (longlong *)0x0) goto LAB_0139892e;
            local_58 = (longlong *)0x0;
          }
          lVar12 = lVar12 + 1;
          plVar7 = local_40;
        } while (lVar12 < *(int *)((longlong)local_60 + 0xc));
      }
    }
  }
  else {
LAB_01398255:
    local_100 = *local_d0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_68 = SUB81(param_1,0);
    FUN_0134a250(&local_f0,&local_100,(undefined1)local_64,local_68);
  }
  if (local_c8 != 0) {
    (**(code **)(*local_50 + 0x408))();
    (**(code **)(*DAT_028acd20 + 0x368))();
    lVar12 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    FUN_00d7a770();
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028acd20 + 0x378))();
  }
  if (*(char *)(unaff_RDI + 0x1a8) != '\0') {
    FUN_00d64850();
    *(undefined1 *)(unaff_RDI + 0x1a8) = 0;
    FUN_00d64910();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01398713;
LAB_013984d8:
  plVar7 = (longlong *)*unaff_RSI;
  local_98 = 0;
  FUN_00d50b00();
  local_98 = '\x01';
  local_a0 = unaff_RDI;
  (**(code **)(*plVar7 + 0x20))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01398723;
}


