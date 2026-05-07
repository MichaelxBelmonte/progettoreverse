// ===== MUQuarterSequenceView — Annotated small functions =====
// 1 readable functions

// ==================================================
// @00657c30 (2089 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int extraout_var;
  ulonglong uVar9;
  void *pvVar10;
  longlong *plVar11;
  longlong *this;
  longlong **pplVar12;
  longlong *plVar13;
  longlong *plVar14;
  double dVar15;
  longlong *local_b8;
  char local_b0;
  int iStack_84;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  double local_38;
  
  FUN_01e561b0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00657c8b;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_00657c8b:
    pplVar12 = &local_48;
    FUN_01d8b200();
    plVar14 = local_48;
    uVar8 = FUN_000914a0();
    if (plVar14 == (longlong *)0x0) {
LAB_00657cce:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar14 + 0x360))();
      uVar8 = FUN_00e85ea0();
      if ((char)uVar8 == '\0') goto LAB_00657cce;
    }
    plVar14 = *pplVar12;
    if (plVar14 == (longlong *)0x0) {
      bVar3 = true;
      bVar4 = true;
      plVar14 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        uVar8 = FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      bVar3 = false;
      bVar4 = false;
    }
    if ((local_40 != '\0') && (bVar4 = bVar3, local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_38 = (double)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    if (plVar14 == (longlong *)0x0) {
      pplVar12 = &local_48;
      FUN_01d8b200();
      plVar13 = local_48;
      if ((DAT_027e2750 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026f75c8 = FUN_0006d940();
        _DAT_026f75b0 = "MUQuarterSequenceView";
        _DAT_026f75b8 = 0x1f8;
        param_1 = 0x10c6a0;
        _DAT_026f75c0 = FUN_0010c6a0;
        _DAT_026f75d0 = 0;
        uRam00000000026f75d8 = 0;
        _DAT_026f75e0 = 0;
        uRam00000000026f75e8 = 0;
        _DAT_026f75f0 = 0;
        uRam00000000026f75f8 = 0;
        _DAT_026f7600 = 0;
        uRam00000000026f7608 = 0;
        _DAT_026f7610 = 0;
        uRam00000000026f7618 = 0;
        _DAT_026f7620 = 0;
        uRam00000000026f7628 = 0;
        _DAT_026f7630 = 0;
        uRam00000000026f7638 = 0;
        _DAT_026f7640 = 0;
        uRam00000000026f7648 = 0;
        _DAT_026f7650 = 0;
        uRam00000000026f7658 = 0;
        _DAT_026f7660 = 0;
        uRam00000000026f7668 = 0;
        _DAT_026f7670 = 0;
        ___cxa_guard_release();
      }
      if (plVar13 == (longlong *)0x0) {
LAB_00657d86:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00657d86;
      }
      local_50 = *pplVar12;
      if (local_50 == (longlong *)0x0) {
        bVar3 = false;
        local_50 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar12 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        local_38 = 0.0;
        goto LAB_00657de3;
      }
      FUN_01f27fe0();
      cVar6 = (**(code **)(*local_48 + 0x450))();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 != '\0') {
        pplVar12 = &local_48;
        FUN_01d8b220();
        plVar13 = local_48;
        FUN_000829c0();
        if (plVar13 == (longlong *)0x0) {
LAB_00658025:
          pplVar12 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_00658025;
        }
        plVar13 = *pplVar12;
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          if (*(char *)(pplVar12 + 1) == '\0') {
            FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
          }
          bVar2 = true;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = (longlong *)0x0;
        if (plVar13 == (longlong *)0x0) goto LAB_006581d8;
        goto LAB_00657dec;
      }
LAB_006581d8:
      uVar9 = 0;
    }
    else {
      local_50 = (longlong *)0x0;
      bVar3 = false;
LAB_00657de3:
      bVar2 = false;
      plVar13 = (longlong *)0x0;
LAB_00657dec:
      (**(code **)(*this + 0x5e0))();
      if (local_40 == '\0') {
        if (local_48 == (longlong *)0x0) goto LAB_00657f75;
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00657e36:
        FUN_00756eb0();
        plVar5 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00657e50;
          }
LAB_00658198:
          uVar9 = 0;
        }
        else {
LAB_00657e50:
          if ((plVar5 == (longlong *)0x0) || (param_2 == '\0')) {
LAB_0065818c:
            if (plVar5 == (longlong *)0x0) goto LAB_00658198;
          }
          else if (plVar14 == (longlong *)0x0 && plVar13 == (longlong *)0x0) {
            if (local_38._0_1_ != '\0') goto LAB_0065818c;
            (**(code **)(*local_50 + 0x9d8))();
            uVar9 = (**(code **)(*local_50 + 0x9e0))();
            if (((extraout_var == 0) || (uVar9 >> 0x20 == 0)) ||
               (cVar6 = FUN_00e7c000(), cVar6 == '\0')) {
              (**(code **)(*local_50 + 0x978))();
              plVar11 = local_48;
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 != (longlong *)0x0) {
                if (extraout_var == 0) {
                  (**(code **)(*local_50 + 0x978))();
                  local_58 = (**(code **)(*local_48 + 0x940))();
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  (**(code **)(*local_50 + 0xa60))();
                  pvVar10 = _pthread_getspecific(param_1);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_58 = FUN_016c98e0();
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                iStack_84 = (int)(uVar9 >> 0x20);
                if (iStack_84 == 0) {
                  (**(code **)(*local_50 + 0x978))();
                  local_38 = (double)(**(code **)(*local_48 + 0x940))();
                  (**(code **)(*local_50 + 0x978))();
                  dVar15 = (double)(**(code **)(*local_b8 + 0x918))();
                  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  dVar15 = local_38 + dVar15;
                }
                else {
                  (**(code **)(*local_50 + 0xa60))();
                  pvVar10 = _pthread_getspecific(param_1);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_38 = (double)FUN_016c98e0();
                  dVar15 = local_38;
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    dVar15 = local_38;
                  }
                }
                (**(code **)(*plVar5 + 0x428))(local_58,dVar15);
              }
            }
          }
          else {
            if (plVar13 == (longlong *)0x0) {
              (**(code **)(*plVar14 + 0xe20))();
              plVar11 = local_48;
              if (local_48 == (longlong *)0x0) goto LAB_006580da;
              bVar1 = true;
              if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_002ee280();
              plVar11 = local_48;
              if (local_48 == (longlong *)0x0) {
LAB_006580da:
                bVar1 = false;
                plVar11 = (longlong *)0x0;
              }
              else {
                bVar1 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
                   (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (plVar11 != (longlong *)0x0) {
              if (*(int *)((longlong)plVar11 + 0xc) != 0) {
                local_38 = (double)FUN_01266200();
                uVar8 = FUN_012664b0();
                (**(code **)(*plVar5 + 0x428))(local_38,uVar8);
              }
              if (bVar1) {
                FUN_00d50b20();
              }
              goto LAB_0065818c;
            }
          }
          uVar9 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        if (local_48 != (longlong *)0x0) goto LAB_00657e36;
LAB_00657f75:
        uVar9 = 0;
      }
      if ((bVar2) && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar4 && plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((bVar3) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_0065838f;
  }
  uVar9 = 0;
LAB_0065838f:
  return uVar9 & 0xffffffff;
}



