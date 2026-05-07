// Function: FUN_00625a00
// Address: 00625a00
// Size: 3280 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00625a00(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  int iVar10;
  bool bVar11;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  lVar1 = local_68;
  cVar2 = FUN_00742da0();
  if (cVar2 == '\0') {
LAB_00625ab1:
    uVar9 = 0;
  }
  else {
    (**(code **)(*this_ptr + 0x5d8))();
    if (local_60 == '\0') {
      if (local_68 == 0) goto LAB_00625ab1;
      FUN_00d50b00();
    }
    else if (local_68 == 0) goto LAB_00625ab1;
    FUN_006f4810();
    FUN_002eacb0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_003231a0();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = 0;
    if (local_68 != 0) {
      local_68 = 0;
      local_50 = -1;
      iVar10 = -1;
      while( true ) {
        lVar5 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_50) break;
        lVar8 = *(int64_t *)(lVar1 + 0x10);
        local_68 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((void*)lVar8);
        pVar7 = (void*)lVar8;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_40 == 0) {
          bVar11 = false;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6a50();
          bVar11 = local_98 != 0;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (bVar11) {
LAB_00625e7d:
          FUN_000be170();
          goto LAB_00625e86;
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar4 = *(int *)(local_40 + 0xc);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar4 != 0) goto LAB_00625e7d;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        local_38 = '\0';
        iVar4 = FUN_00d237a0();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        iVar3 = iVar10;
        if (iVar4 < iVar10) {
          iVar3 = iVar4;
        }
        bVar11 = iVar10 == -1;
        iVar10 = iVar3;
        local_40 = local_68;
        if (bVar11) {
          iVar10 = iVar4;
        }
      }
      lVar5 = lVar1;
      FUN_000be170();
      pVar7 = (void*)lVar5;
      if (iVar10 == -1) {
LAB_00625e86:
        uVar9 = 0;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        uVar9 = 1;
        if (param_2 != '\0') {
          if (iVar10 < 1) {
            bVar11 = false;
            local_88 = 0;
          }
          else {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            local_88 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + (uint64_t)(iVar10 - 1) * 8);
            bVar11 = local_88 == 0;
            if (bVar11) {
              local_88 = 0;
            }
            else {
              FUN_00d50b00();
            }
            bVar11 = !bVar11;
          }
          FUN_006f3f00();
          FUN_0078a130();
          if (local_68 != 0) {
            FUN_00d50b00();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == 0) {
            uVar9 = 0;
            if ((bVar11) && (local_88 != 0)) {
              FUN_00d50b20();
              uVar9 = 0;
            }
          }
          else {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar5 = g_02725a98;
            if (g_02725a98 != 0) {
              FUN_00d50b00();
            }
            FUN_012e5f80();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            local_50 = -1;
            while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
              pVar7 = (void*)*(void*)(lVar1 + 0x10);
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6a50();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e68b0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e6520();
              if (local_40 != 0) {
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0150fe10();
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0150f380();
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e7fb0();
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0150f020();
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_000be170();
            FUN_006f3f00();
            FUN_0074a910();
            FUN_006f4810();
            FUN_000ba510();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_002ea230();
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_006f4810();
            FUN_002f1240();
            FUN_01bc17d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if ((bVar11) && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar9;
}

