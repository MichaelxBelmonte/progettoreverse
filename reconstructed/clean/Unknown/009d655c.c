// Function: FUN_009d655c
// Address: 009d655c
// Size: 849 bytes
// Class: Unknown

int64_t * FUN_009d655c(uint64_t param_1,locale *param_2)

{
  int64_t *******ppppppplVar1;
  int64_t ****pppplVar2;
  int64_t ****pppplVar3;
  int iVar4;
  void*puVar5;
  int64_t ******pppppplVar6;
  int64_t lVar7;
  locale *this;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t arg1;
  int64_t *******ppppppplVar10;
  int64_t *this_ptr;
  uint64_t uVar11;
  locale *plVar12;
  int64_t ******local_70;
  int64_t ******local_68;
  locale *local_60;
  uint64_t local_58;
  int64_t *****local_50;
  int64_t ****local_48;
  int64_t ****pppplStack_40;
  
  plVar12 = param_2;
  if ((g_02753c40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02753c10 = (int64_t *******)&g_02753c10;
    g_02753c18 = (int64_t *)&g_02753c10;
    g_02753c20 = 0;
    g_02753c30 = 0;
    g_02753c38 = (locale *)0x0;
    g_02753c28 = &g_02753c30;
    plVar12 = (locale *)0x0;
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  puVar5 = (void*)FUN_009d699a();
  this = (locale *)&g_02753c30;
  if (puVar5 == &g_02753c30) {
    operator_new(0x2753c30);
    FUN_009d6a86();
    FUN_009d793c();
    pppplVar3 = pppplStack_40;
    pppplVar2 = local_48;
    if ((int64_t *****)pppplStack_40 != (int64_t *****)0x0) {
      LOCK();
      *(int *)(pppplStack_40 + 1) = *(int *)(pppplStack_40 + 1) + 1;
      UNLOCK();
    }
    pppppplVar6 = operator_new((ulong)this);
    pppppplVar6[2] = (int64_t *****)pppplVar2;
    pppppplVar6[3] = (int64_t *****)pppplVar3;
    pppppplVar6[4] = (int64_t *****)0x0;
    pppppplVar6[1] = (int64_t *****)&g_02753c10;
    *pppppplVar6 = (int64_t *****)g_02753c10;
    g_02753c10[1] = pppppplVar6;
    g_02753c20 = g_02753c20 + 1;
    g_02753c10 = (int64_t *******)pppppplVar6;
    std::locale::locale(this,plVar12);
    local_58 = *(void*)(arg1 + 0x18);
    local_68 = *(int64_t *******)(arg1 + 8);
    plVar12 = *(locale **)(arg1 + 0x10);
    local_60 = plVar12;
    local_50 = (int64_t *****)pppppplVar6;
    FUN_009d7aba(plVar12,&local_70);
    std::locale::~locale(plVar12);
    lVar7 = FUN_009d699a();
    g_02753c10[4] = (int64_t ******)(lVar7 + 0x20);
    if ((param_2 < g_02753c38) &&
       (plVar8 = g_02753c18, plVar12 = g_02753c38,
       (int64_t ********)g_02753c18 != &g_02753c10)) {
      do {
        if ((plVar8[3] == 0) || (*(int *)(plVar8[3] + 8) != 1)) {
          plVar9 = (int64_t *)plVar8[1];
        }
        else {
          plVar9 = (int64_t *)plVar8[1];
          FUN_009d7c0e();
          lVar7 = *plVar8;
          *(int64_t *)(lVar7 + 8) = plVar8[1];
          plVar8 = (int64_t *)plVar8[1];
          *plVar8 = lVar7;
          g_02753c20 = g_02753c20 + -1;
          FUN_009b2a50();
          operator_delete(plVar8);
          plVar12 = plVar12 + -1;
        }
      } while (((int64_t ********)plVar9 != &g_02753c10) && (plVar8 = plVar9, param_2 < plVar12))
      ;
    }
    *this_ptr = (int64_t)local_48;
    this_ptr[1] = (int64_t)pppplStack_40;
    return this_ptr;
  }
  ppppppplVar1 = *(int64_t ********)(puVar5 + 0x40);
  if (g_02753c10 == ppppppplVar1) goto LAB_009d6811;
  ppppppplVar10 = &local_70;
  local_70 = (int64_t ******)ppppppplVar10;
  local_68 = (int64_t ******)ppppppplVar10;
  local_60 = (locale *)0x0;
  if (ppppppplVar10 == ppppppplVar1) {
    uVar11 = 0xffffffffffffffff;
LAB_009d679c:
    ppppppplVar10 = ppppppplVar1;
    local_70 = local_68;
    if ((int64_t ********)ppppppplVar1 != &g_02753c10) goto LAB_009d67b4;
  }
  else {
    if ((int64_t *******)ppppppplVar1[1] != ppppppplVar10) {
      pppppplVar6 = *ppppppplVar1;
      pppppplVar6[1] = (int64_t *****)ppppppplVar1[1];
      *ppppppplVar1[1] = (int64_t *****)pppppplVar6;
      *ppppppplVar1 = (int64_t ******)ppppppplVar10;
      local_70 = (int64_t ******)ppppppplVar1;
      ppppppplVar1[1] = (int64_t ******)&local_70;
      g_02753c20 = g_02753c20 + -1;
      local_60 = (locale *)0x1;
      uVar11 = 0;
      local_68 = (int64_t ******)ppppppplVar1;
      goto LAB_009d679c;
    }
    uVar11 = 0xffffffffffffffff;
LAB_009d67b4:
    local_70 = local_68;
    if ((int64_t ********)ppppppplVar10[1] != &g_02753c10) {
      pppppplVar6 = *ppppppplVar10;
      pppppplVar6[1] = (int64_t *****)ppppppplVar10[1];
      *ppppppplVar10[1] = (int64_t *****)pppppplVar6;
      g_02753c10[1] = (int64_t ******)ppppppplVar10;
      *ppppppplVar10 = (int64_t ******)g_02753c10;
      ppppppplVar10[1] = (int64_t ******)&g_02753c10;
      g_02753c20 = g_02753c20 + 1;
      g_02753c10 = ppppppplVar10;
      local_60 = (locale *)uVar11;
    }
  }
  *(int64_t ********)(puVar5 + 0x40) = g_02753c10;
  FUN_009d6a24();
LAB_009d6811:
  ppppppplVar1 = g_02753c10;
  *this_ptr = (int64_t)g_02753c10[2];
  pppppplVar6 = ppppppplVar1[3];
  this_ptr[1] = (int64_t)pppppplVar6;
  if (pppppplVar6 != (int64_t ******)0x0) {
    LOCK();
    *(int *)(pppppplVar6 + 1) = *(int *)(pppppplVar6 + 1) + 1;
    UNLOCK();
  }
  return this_ptr;
}

