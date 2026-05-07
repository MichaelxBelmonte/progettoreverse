// Function: FUN_0077e980
// Address: 0077e980
// Size: 2917 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
//   "MDEditorView"


/* WARNING: Removing unreachable block (ram,0x0077eeaf) */
/* WARNING: Removing unreachable block (ram,0x0077eebb) */
/* WARNING: Removing unreachable block (ram,0x0077f100) */
/* WARNING: Removing unreachable block (ram,0x0077f10c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077e980(pthread_key_t param_1)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar10;
  bool bVar11;
  longlong *local_b0;
  char local_a8;
  longlong *plVar12;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  
  FUN_00d3ed20();
  lVar6 = DAT_02704e30;
  if (DAT_02704e30 != 0) {
    FUN_00d50b00();
  }
  pplVar10 = &local_60;
  FUN_000175c0();
  plVar12 = local_60;
  FUN_000823a0();
  if (plVar12 == (longlong *)0x0) {
LAB_0077ea0f:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0077ea0f;
  }
  plVar12 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4d60();
    plVar8 = plVar12;
    if (plVar12 != local_60) {
      plVar12 = local_60;
      if (local_58[0] != '\0') {
        FUN_00d50b20();
        goto LAB_0077eb1a;
      }
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = local_60;
    }
    if ((local_58[0] != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0077eb1a:
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x610))();
  plVar12 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_0077f442;
    FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (longlong *)0x0) goto LAB_0077f442;
  local_58[0] = '\0';
  local_60 = (longlong *)0x0;
  local_50 = plVar12;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_48._4_4_ = 0;
  bVar1 = false;
  plVar12 = (longlong *)0x0;
  while( true ) {
    if (local_48._4_4_ != 0) {
      if (local_48._4_4_ < 1) {
        iVar9 = -local_48._4_4_;
      }
      else {
        iVar9 = (int)local_48 - local_48._4_4_;
        local_48 = CONCAT44(local_48._4_4_,iVar9);
        FUN_00d23690();
        local_40 = local_40 + local_48._4_4_;
        iVar9 = 0;
      }
      local_48 = CONCAT44(iVar9,(int)local_48);
    }
    lVar6 = (longlong)(int)local_48;
    iVar9 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar9);
    if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
    local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
    (**(code **)(*local_60 + 0x5d8))();
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0077ec70;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_0077ec70:
      FUN_0063f230();
      if (local_70 == (longlong *)0x0) {
        bVar11 = false;
      }
      else {
        FUN_0063f230();
        FUN_0021a630();
        bVar11 = CONCAT71(uStack_7f,local_80) != 0;
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_0063f230();
        FUN_0021a630();
        FUN_00d3ecf0();
        plVar8 = local_70;
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
        if (plVar8 == local_b0) {
          FUN_0064ffc0();
          FUN_004405c0();
          plVar8 = local_70;
          if (local_70 == plVar12) {
            plVar8 = plVar12;
            bVar11 = bVar1;
            if ((!bVar1) && (local_70 != (longlong *)0x0)) {
              if (local_68 != '\0') goto LAB_0077eddd;
              FUN_00d50b00();
              bVar11 = true;
            }
LAB_0077ee1d:
            bVar1 = bVar11;
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar11 = true;
              if ((bVar1) && (plVar12 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0077ee1d;
            }
            if ((bVar1) && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_0077eddd:
            local_68 = '\0';
            bVar1 = true;
          }
          plVar12 = plVar8;
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_000e3600();
  FUN_00d50b20();
  if (plVar12 == (longlong *)0x0) goto LAB_0077f442;
  FUN_004b8020();
  plVar12 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_004b5af0();
    plVar8 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0077ef3c;
      }
    }
    else if (local_60 != (longlong *)0x0) {
LAB_0077ef3c:
      FUN_00d3ecc0();
      plVar2 = local_60;
      lVar6 = DAT_02729470;
      if (DAT_02729470 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar8;
      local_48 = 0xffffffff;
      local_40 = 0;
      if (cVar3 == '\0') {
        local_48._4_4_ = 0;
        while( true ) {
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar9 = -local_48._4_4_;
            }
            else {
              iVar9 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar9);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar9 = 0;
            }
            local_48 = CONCAT44(iVar9,(int)local_48);
          }
          lVar6 = (longlong)(int)local_48;
          iVar9 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
          local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
          if (local_60 == plVar12) {
            FUN_003b79a0();
          }
          else {
            iVar9 = FUN_003b7980();
            if (iVar9 == 2) {
              FUN_003b79a0();
            }
          }
        }
      }
      else {
        iVar9 = 0;
        while( true ) {
          iVar4 = 0;
          if (iVar9 != 0) {
            if (iVar9 < 1) {
              iVar4 = -iVar9;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar9);
              FUN_00d23690(iVar9,iVar9);
              local_40 = local_40 + local_48._4_4_;
              iVar4 = 0;
            }
            local_48 = CONCAT44(iVar4,(int)local_48);
          }
          lVar6 = (longlong)(int)local_48;
          iVar9 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
          local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
          iVar9 = iVar4;
          if (local_60 == plVar12) {
            FUN_003b79a0();
            iVar9 = local_48._4_4_;
          }
        }
      }
      FUN_00274d30();
      FUN_00657670();
      if (*unaff_RSI != 0) {
        pplVar10 = &local_60;
        FUN_00d3ecf0();
        plVar12 = local_60;
        if ((DAT_0271a0b0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          _DAT_0272a1e8 = FUN_000914a0();
          _DAT_0272a1d0 = "MDEditorView";
          _DAT_0272a1d8 = 0x560;
          _DAT_0272a1e0 = FUN_0034df50;
          _DAT_0272a1f0 = 0;
          uRam000000000272a1f8 = 0;
          _DAT_0272a200 = 0;
          _DAT_0272a278 = 0;
          uRam000000000272a280 = 0;
          _DAT_0272a288 = 0;
          DAT_0272a28a = 1;
          _DAT_0272a208 = 0;
          uRam000000000272a210 = 0;
          _DAT_0272a218 = 0;
          uRam000000000272a220 = 0;
          _DAT_0272a228 = 0;
          uRam000000000272a230 = 0;
          _DAT_0272a238 = 0;
          uRam000000000272a240 = 0;
          _DAT_0272a248 = 0;
          uRam000000000272a250 = 0;
          _DAT_0272a258 = 0;
          uRam000000000272a260 = 0;
          _DAT_0272a268 = 0;
          uRam000000000272a270 = 0;
          DAT_0272a293 = 0;
          _DAT_0272a28b = 0;
          ___cxa_guard_release();
        }
        if (plVar12 == (longlong *)0x0) {
LAB_0077f163:
          pplVar10 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar12 + 0x360))();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') goto LAB_0077f163;
        }
        plVar12 = *pplVar10;
        if (plVar12 == (longlong *)0x0) {
          bVar11 = true;
          plVar12 = (longlong *)0x0;
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          bVar11 = false;
        }
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar12 != (longlong *)0x0) {
          local_80 = '\0';
          local_70 = plVar12;
          do {
            plVar12 = local_70;
            (**(code **)(*local_70 + 0x370))();
            plVar8 = local_60;
            if (local_60 == plVar12) {
              if (((local_80 == '\0') && (local_60 != (longlong *)0x0)) &&
                 (plVar8 = plVar12, local_58[0] != '\0')) goto LAB_0077f237;
            }
            else {
              local_70 = local_60;
              if (local_58[0] == '\0') {
                if (local_80 == '\0') {
                  pcVar7 = &local_80;
                }
                else {
                  FUN_00d50b20();
                  pcVar7 = &local_80;
                }
              }
              else {
                if (local_80 != '\0') {
                  FUN_00d50b20();
                }
LAB_0077f237:
                local_80 = '\x01';
                pcVar7 = local_58;
              }
              *pcVar7 = '\0';
              plVar12 = plVar8;
            }
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((DAT_026f7020 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
              _DAT_0270aa58 = FUN_00015ff0();
              _DAT_0270aa40 = "MDEditorViewController";
              _DAT_0270aa48 = 0x1e8;
              _DAT_0270aa50 = FUN_00074eb0;
              _DAT_0270aa60 = 0;
              uRam000000000270aa68 = 0;
              _DAT_0270aa70 = 0;
              _DAT_0270aae8 = 0;
              uRam000000000270aaf0 = 0;
              _DAT_0270aaf8 = 0;
              DAT_0270aafa = 1;
              _DAT_0270aa78 = 0;
              uRam000000000270aa80 = 0;
              _DAT_0270aa88 = 0;
              uRam000000000270aa90 = 0;
              _DAT_0270aa98 = 0;
              uRam000000000270aaa0 = 0;
              _DAT_0270aaa8 = 0;
              uRam000000000270aab0 = 0;
              _DAT_0270aab8 = 0;
              uRam000000000270aac0 = 0;
              _DAT_0270aac8 = 0;
              uRam000000000270aad0 = 0;
              _DAT_0270aad8 = 0;
              uRam000000000270aae0 = 0;
              DAT_0270ab03 = 0;
              _DAT_0270aafb = 0;
              ___cxa_guard_release();
            }
            pplVar10 = (longlong **)&DAT_02802688;
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar3 = FUN_00e85ea0();
              pplVar10 = &local_70;
              if (cVar3 == '\0') {
                pplVar10 = (longlong **)&DAT_02802688;
              }
            }
            if (*pplVar10 != (longlong *)0x0) {
              if ((local_80 == '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              else if (local_70 == (longlong *)0x0) break;
              FUN_00212bd0();
              plVar12 = local_60;
              if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 != (longlong *)0x0) {
                FUN_00212bd0();
                FUN_00447310();
                if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
              break;
            }
          } while (local_70 != (longlong *)0x0);
          if (!bVar11) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
LAB_0077f442:
  FUN_00d50b20();
  return;
}


