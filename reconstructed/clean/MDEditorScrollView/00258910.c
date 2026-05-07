// Function: FUN_00258910
// Address: 00258910
// Size: 4361 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_00258910(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t this_ptr;
  bool bVar14;
  uint64_t uVar15;
  int local_7c;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char local_60 [8];
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  int64_t *local_38;
  
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar13 = local_40;
    local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
    pplVar11 = &local_58;
    if ((char)local_38 != '\0') {
      pplVar11 = &local_38;
    }
    *(void*)pplVar11 = 0;
    if (((char)local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (int64_t *)0x0) {
      plVar13 = *(int64_t **)(this_ptr + 0x90);
      if (plVar13 != (int64_t *)0x0) goto LAB_00258991;
    }
    else {
      if ((char)local_58 == '\0') {
LAB_00258991:
        FUN_00d50b00();
      }
      if (plVar13 != (int64_t *)0x0) {
        plVar13 = *(int64_t **)(this_ptr + 0x90);
        if (plVar13 == (int64_t *)0x0) {
LAB_00258a17:
          plVar10 = (int64_t *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar13))();
          plVar10 = local_40;
          local_70 = (char)local_38;
          pplVar11 = (int64_t **)&local_70;
          if ((char)local_38 != '\0') {
            pplVar11 = &local_38;
          }
          *(char *)pplVar11 = '\0';
          if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (int64_t *)0x0) {
            plVar10 = *(int64_t **)(this_ptr + 0x90);
            if (plVar10 == (int64_t *)0x0) goto LAB_00258a17;
          }
          else if (local_70 != '\0') goto LAB_00258a1a;
          FUN_00d50b00();
        }
LAB_00258a1a:
        FUN_019f0ee0();
        plVar1 = local_58;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar1 != (int64_t *)0x0) {
          plVar13 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar13))();
          plVar10 = local_40;
          pplVar11 = &local_58;
          if ((char)local_38 != '\0') {
            pplVar11 = &local_38;
          }
          local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
          *(void*)pplVar11 = 0;
          if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (int64_t *)0x0) {
            plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_00258ac2:
            FUN_00d50b00();
          }
          else if ((char)local_58 == '\0') goto LAB_00258ac2;
          (**(code **)(*plVar10 + 0xec0))();
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar13 = *(int64_t **)(this_ptr + 0x90);
          if (plVar13 == (int64_t *)0x0) {
LAB_00258b6a:
            plVar10 = (int64_t *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_40;
            local_70 = (char)local_38;
            pplVar11 = (int64_t **)&local_70;
            if ((char)local_38 != '\0') {
              pplVar11 = &local_38;
            }
            *(char *)pplVar11 = '\0';
            if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (int64_t *)0x0) {
              plVar10 = *(int64_t **)(this_ptr + 0x90);
              if (plVar10 == (int64_t *)0x0) goto LAB_00258b6a;
            }
            else if (local_70 != '\0') goto LAB_00258b6d;
            FUN_00d50b00();
          }
LAB_00258b6d:
          FUN_019f0f90();
          plVar1 = *(int64_t **)(this_ptr + 0x90);
          if (plVar1 == (int64_t *)0x0) {
LAB_00258bf3:
            plVar12 = (int64_t *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar1))();
            plVar12 = local_40;
            pplVar11 = &local_38;
            if ((char)local_38 == '\0') {
              pplVar11 = (int64_t **)local_60;
            }
            local_60[0] = (char)local_38;
            *(char *)pplVar11 = '\0';
            if (((char)local_38 != '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 == (int64_t *)0x0) {
              plVar12 = *(int64_t **)(this_ptr + 0x90);
              if (plVar12 == (int64_t *)0x0) goto LAB_00258bf3;
            }
            else if (local_60[0] != '\0') goto LAB_00258bf6;
            FUN_00d50b00();
          }
LAB_00258bf6:
          FUN_019f0ee0();
          lVar2 = CONCAT71(uStack_6f,local_70);
          if (local_68 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_01e26eb0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((plVar1 != (int64_t *)0x0) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
            (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
            plVar13 = local_40;
            if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar10 = g_026f6f08;
            if (plVar13 != (int64_t *)0x0) {
              if (g_026f6f08 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              FUN_00e7d6f0();
              pVar9 = 0xaaaaaaab;
              uVar15 = FUN_0071a120();
              if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                  (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              local_58 = plVar10;
              local_50 = '\0';
              FUN_000175c0(uVar15,&local_58);
              plVar13 = local_40;
              if ((char)local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
                   (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38._0_1_ = '\0';
              }
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 != (int64_t *)0x0) {
                local_38._0_1_ = '\0';
                local_40 = plVar13;
                uVar6 = FUN_00c70bc0();
                plVar12 = (int64_t *)(uint64_t)uVar6;
                if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if ((plVar13 != (int64_t *)0x0 & (byte)plVar12) == 0) {
                (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
                (**(code **)(&UNK_00001668 + *local_58))();
                pvVar8 = _pthread_getspecific(pVar9);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar7 = FUN_01326de0();
                bVar14 = iVar7 == 3;
                if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar14 = false;
              }
              if (plVar10 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (!bVar14) goto LAB_00258f18;
              local_38._0_1_ = '\0';
              local_40 = (int64_t *)0x0;
              local_58 = (int64_t *)0x0;
              local_50 = '\0';
              FUN_00228b40(&local_58,&local_40);
            }
          }
          FUN_0022ee90();
        }
      }
    }
  }
LAB_00258f18:
  if ((*(int64_t *)(this_ptr + 0x160) != 0) &&
     (FUN_00d50130(), *(int64_t *)(this_ptr + 0x160) != 0)) {
    *(void*)(this_ptr + 0x160) = 0;
    FUN_00d50b20();
  }
  plVar13 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar10 = local_40;
  local_70 = (char)local_38;
  pplVar11 = (int64_t **)&local_70;
  if ((char)local_38 != '\0') {
    pplVar11 = &local_38;
  }
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_00258fa6:
    FUN_00d50b00();
  }
  else if (local_70 == '\0') goto LAB_00258fa6;
  pplVar11 = &local_58;
  (**(code **)(*plVar10 + 0x970))();
  plVar10 = local_58;
  if ((g_02709e70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026f8cd8 = FUN_00074a70();
    g_026f8cc0 = "MDEditorScrollView";
    g_026f8cc8 = 0x260;
    g_026f8cd0 = FUN_000749b0;
    g_026f8ce0 = 0;
    ram_00000000026f8ce8 = 0;
    g_026f8cf0 = 0;
    g_026f8d68 = 0;
    ram_00000000026f8d70 = 0;
    g_026f8d78 = 0;
    g_026f8d7a = 1;
    g_026f8cf8 = 0;
    ram_00000000026f8d00 = 0;
    g_026f8d08 = 0;
    ram_00000000026f8d10 = 0;
    g_026f8d18 = 0;
    ram_00000000026f8d20 = 0;
    g_026f8d28 = 0;
    ram_00000000026f8d30 = 0;
    g_026f8d38 = 0;
    ram_00000000026f8d40 = 0;
    g_026f8d48 = 0;
    ram_00000000026f8d50 = 0;
    g_026f8d58 = 0;
    ram_00000000026f8d60 = 0;
    g_026f8d83 = 0;
    g_026f8d7b = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_00258ff8:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00258ff8;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar13 = g_026f6df0;
  if (plVar1 == (int64_t *)0x0) goto LAB_00259349;
  if (g_026f6df0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar15 = FUN_0071a120();
  if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  local_58 = plVar13;
  local_50 = '\0';
  FUN_000175c0(uVar15,&local_58);
  plVar10 = local_40;
  if ((char)local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38._0_1_ = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    local_7c = 0;
  }
  else {
    local_38._0_1_ = '\0';
    local_40 = plVar10;
    local_7c = FUN_00c716c0();
    if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00504770();
  plVar10 = plVar13;
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) goto LAB_00259349;
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar13 = local_40;
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 == (int64_t *)0x0) {
    plVar13 = *(int64_t **)(this_ptr + 0x90);
    if (plVar13 == (int64_t *)0x0) goto LAB_00259349;
LAB_0025920a:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_0025920a;
  if (plVar13 == (int64_t *)0x0) goto LAB_00259349;
  plVar13 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar12 = local_40;
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (int64_t *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x90);
LAB_0025927c:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_0025927c;
  iVar7 = (**(code **)(&g_000015c0 + *plVar12))();
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (iVar7 <= local_7c) goto LAB_00259349;
  plVar13 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar12 = local_40;
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
  *(void*)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (int64_t *)0x0) {
    plVar12 = *(int64_t **)(this_ptr + 0x90);
LAB_00259325:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_00259325;
  (**(code **)(&g_000015b8 + *plVar12))();
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00259349:
  plVar13 = (int64_t *)0x0;
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar13 = *(int64_t **)(this_ptr + 0x90);
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar12 = g_02709e30;
    if (g_02709e30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    plVar10 = local_40;
    if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar12;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar3 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar3;
      FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    (**(code **)(&g_000015c8 + *plVar13))();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar13 = *(int64_t **)(this_ptr + 0x90);
  }
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar13 = local_40;
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar12 = g_02709e30;
    plVar13 = (int64_t *)CONCAT71(uStack_6f,local_70);
    if (g_02709e30 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    plVar10 = local_40;
    if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar12;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar3 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar3;
      FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    (**(code **)(&g_000015c8 + *plVar13))();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
  }
  bVar5 = (byte)plVar10;
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar13 = local_40;
  if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = g_026f6ea0;
  if (plVar13 != (int64_t *)0x0) {
    if (g_026f6ea0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    if (((((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar10;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar13 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (int64_t *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar13;
      bVar5 = FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar13 != (int64_t *)0x0 & bVar5) == 0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_019f7880();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_00212950();
      FUN_019f78b0();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_00212a20();
      FUN_019f7a40();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      FUN_00212b00();
      FUN_019f7880();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

