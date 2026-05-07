// Function: FUN_00262e30
// Address: 00262e30
// Size: 1339 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00262e30(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  byte unaff_SIL;
  void*this_ptr;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar10 = g_026f6fa0;
  if (g_026f6fa0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_60 = plVar10;
  local_58 = '\0';
  FUN_000175c0(uVar11,&local_60);
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar1 = unaff_SIL;
  if (local_48 != (int64_t *)0x0) {
    local_40[0] = '\0';
    bVar1 = FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != (int64_t *)0x0 & bVar1) != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar9 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
    if (cVar2 != '\0') goto LAB_00263200;
    local_60 = (int64_t *)*this_ptr;
    local_38[0] = '\0';
    do {
      plVar10 = local_60;
      (**(code **)(*local_60 + 0x370))();
      if (local_48 == plVar10) {
        if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_00263057;
        }
      }
      else {
        local_60 = local_48;
        plVar10 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_00263057:
          local_38[0] = '\x01';
          pcVar5 = local_40;
        }
        *pcVar5 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_0270aa58 = FUN_00015ff0();
        g_0270aa40 = "MDEditorViewController";
        g_0270aa48 = 0x1e8;
        g_0270aa50 = FUN_00074eb0;
        g_0270aa60 = 0;
        ram_000000000270aa68 = 0;
        g_0270aa70 = 0;
        g_0270aae8 = 0;
        ram_000000000270aaf0 = 0;
        g_0270aaf8 = 0;
        g_0270aafa = 1;
        g_0270aa78 = 0;
        ram_000000000270aa80 = 0;
        g_0270aa88 = 0;
        ram_000000000270aa90 = 0;
        g_0270aa98 = 0;
        ram_000000000270aaa0 = 0;
        g_0270aaa8 = 0;
        ram_000000000270aab0 = 0;
        g_0270aab8 = 0;
        ram_000000000270aac0 = 0;
        g_0270aac8 = 0;
        ram_000000000270aad0 = 0;
        g_0270aad8 = 0;
        ram_000000000270aae0 = 0;
        g_0270ab03 = 0;
        g_0270aafb = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar10 = local_60;
      if (*pplVar8 != (int64_t *)0x0) {
        if ((local_38[0] == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        else if (local_60 == (int64_t *)0x0) break;
        pVar7 = (void*)pplVar8;
        if (plVar10[0x38] == 0) {
LAB_00263271:
          uVar9 = 0;
        }
        else {
          FUN_006f3f00();
          if (local_40[0] == '\0') {
            if (local_48 == (int64_t *)0x0) goto LAB_00263271;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_48 == (int64_t *)0x0) goto LAB_00263271;
          cVar2 = FUN_00751ba0();
          uVar9 = 0x270aa01;
          if ((cVar2 != '\0') && (unaff_SIL == 0)) {
            (**(code **)(*local_48 + 0x628))();
            if (local_40[0] == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0026329a;
              }
            }
            else if (local_48 != (int64_t *)0x0) {
LAB_0026329a:
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004a11a0();
              if (local_40[0] == '\0') {
                if (local_48 == (int64_t *)0x0) goto LAB_00263353;
                FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_0026330f:
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar4 = FUN_0170fee0();
                FUN_00d50b20();
                uVar9 = (uint64_t)uVar4 ^ 1;
              }
              else {
                if (local_48 != (int64_t *)0x0) goto LAB_0026330f;
LAB_00263353:
                uVar9 = 0;
              }
              FUN_00d50b20();
              goto LAB_0026335e;
            }
            uVar9 = 0;
          }
LAB_0026335e:
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_00263200;
      }
    } while (local_60 != (int64_t *)0x0);
  }
  uVar9 = 0;
LAB_00263200:
  return uVar9 & 0xffffffff;
}

