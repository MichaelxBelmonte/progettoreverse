// Function: FUN_009d655c
// Address: 009d655c
// Size: 849 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_009d655c(undefined8 param_1,locale *param_2)

{
  longlong *******ppppppplVar1;
  longlong ****pppplVar2;
  longlong ****pppplVar3;
  int iVar4;
  undefined *puVar5;
  longlong ******pppppplVar6;
  longlong lVar7;
  locale *this;
  longlong *plVar8;
  longlong *plVar9;
  longlong unaff_RSI;
  longlong *******ppppppplVar10;
  longlong *unaff_RDI;
  undefined8 uVar11;
  locale *plVar12;
  longlong ******local_70;
  longlong ******local_68;
  locale *local_60;
  undefined8 local_58;
  longlong *****local_50;
  longlong ****local_48;
  longlong ****pppplStack_40;
  
  plVar12 = param_2;
  if ((DAT_02753c40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    DAT_02753c10 = (longlong *******)&DAT_02753c10;
    DAT_02753c18 = (longlong *)&DAT_02753c10;
    _DAT_02753c20 = 0;
    _DAT_02753c30 = 0;
    DAT_02753c38 = (locale *)0x0;
    _DAT_02753c28 = &DAT_02753c30;
    plVar12 = (locale *)0x0;
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  puVar5 = (undefined *)FUN_009d699a();
  this = (locale *)&DAT_02753c30;
  if (puVar5 == &DAT_02753c30) {
    operator_new(0x2753c30);
    FUN_009d6a86();
    FUN_009d793c();
    pppplVar3 = pppplStack_40;
    pppplVar2 = local_48;
    if ((longlong *****)pppplStack_40 != (longlong *****)0x0) {
      LOCK();
      *(int *)(pppplStack_40 + 1) = *(int *)(pppplStack_40 + 1) + 1;
      UNLOCK();
    }
    pppppplVar6 = operator_new((ulong)this);
    pppppplVar6[2] = (longlong *****)pppplVar2;
    pppppplVar6[3] = (longlong *****)pppplVar3;
    pppppplVar6[4] = (longlong *****)0x0;
    pppppplVar6[1] = (longlong *****)&DAT_02753c10;
    *pppppplVar6 = (longlong *****)DAT_02753c10;
    DAT_02753c10[1] = pppppplVar6;
    _DAT_02753c20 = _DAT_02753c20 + 1;
    DAT_02753c10 = (longlong *******)pppppplVar6;
    std::locale::locale(this,plVar12);
    local_58 = *(undefined8 *)(unaff_RSI + 0x18);
    local_68 = *(longlong *******)(unaff_RSI + 8);
    plVar12 = *(locale **)(unaff_RSI + 0x10);
    local_60 = plVar12;
    local_50 = (longlong *****)pppppplVar6;
    FUN_009d7aba(plVar12,&local_70);
    std::locale::~locale(plVar12);
    lVar7 = FUN_009d699a();
    DAT_02753c10[4] = (longlong ******)(lVar7 + 0x20);
    if ((param_2 < DAT_02753c38) &&
       (plVar8 = DAT_02753c18, plVar12 = DAT_02753c38,
       (longlong ********)DAT_02753c18 != &DAT_02753c10)) {
      do {
        if ((plVar8[3] == 0) || (*(int *)(plVar8[3] + 8) != 1)) {
          plVar9 = (longlong *)plVar8[1];
        }
        else {
          plVar9 = (longlong *)plVar8[1];
          FUN_009d7c0e();
          lVar7 = *plVar8;
          *(longlong *)(lVar7 + 8) = plVar8[1];
          plVar8 = (longlong *)plVar8[1];
          *plVar8 = lVar7;
          _DAT_02753c20 = _DAT_02753c20 + -1;
          FUN_009b2a50();
          operator_delete(plVar8);
          plVar12 = plVar12 + -1;
        }
      } while (((longlong ********)plVar9 != &DAT_02753c10) && (plVar8 = plVar9, param_2 < plVar12))
      ;
    }
    *unaff_RDI = (longlong)local_48;
    unaff_RDI[1] = (longlong)pppplStack_40;
    return unaff_RDI;
  }
  ppppppplVar1 = *(longlong ********)(puVar5 + 0x40);
  if (DAT_02753c10 == ppppppplVar1) goto LAB_009d6811;
  ppppppplVar10 = &local_70;
  local_70 = (longlong ******)ppppppplVar10;
  local_68 = (longlong ******)ppppppplVar10;
  local_60 = (locale *)0x0;
  if (ppppppplVar10 == ppppppplVar1) {
    uVar11 = 0xffffffffffffffff;
LAB_009d679c:
    ppppppplVar10 = ppppppplVar1;
    local_70 = local_68;
    if ((longlong ********)ppppppplVar1 != &DAT_02753c10) goto LAB_009d67b4;
  }
  else {
    if ((longlong *******)ppppppplVar1[1] != ppppppplVar10) {
      pppppplVar6 = *ppppppplVar1;
      pppppplVar6[1] = (longlong *****)ppppppplVar1[1];
      *ppppppplVar1[1] = (longlong *****)pppppplVar6;
      *ppppppplVar1 = (longlong ******)ppppppplVar10;
      local_70 = (longlong ******)ppppppplVar1;
      ppppppplVar1[1] = (longlong ******)&local_70;
      _DAT_02753c20 = _DAT_02753c20 + -1;
      local_60 = (locale *)0x1;
      uVar11 = 0;
      local_68 = (longlong ******)ppppppplVar1;
      goto LAB_009d679c;
    }
    uVar11 = 0xffffffffffffffff;
LAB_009d67b4:
    local_70 = local_68;
    if ((longlong ********)ppppppplVar10[1] != &DAT_02753c10) {
      pppppplVar6 = *ppppppplVar10;
      pppppplVar6[1] = (longlong *****)ppppppplVar10[1];
      *ppppppplVar10[1] = (longlong *****)pppppplVar6;
      DAT_02753c10[1] = (longlong ******)ppppppplVar10;
      *ppppppplVar10 = (longlong ******)DAT_02753c10;
      ppppppplVar10[1] = (longlong ******)&DAT_02753c10;
      _DAT_02753c20 = _DAT_02753c20 + 1;
      DAT_02753c10 = ppppppplVar10;
      local_60 = (locale *)uVar11;
    }
  }
  *(longlong ********)(puVar5 + 0x40) = DAT_02753c10;
  FUN_009d6a24();
LAB_009d6811:
  ppppppplVar1 = DAT_02753c10;
  *unaff_RDI = (longlong)DAT_02753c10[2];
  pppppplVar6 = ppppppplVar1[3];
  unaff_RDI[1] = (longlong)pppppplVar6;
  if (pppppplVar6 != (longlong ******)0x0) {
    LOCK();
    *(int *)(pppppplVar6 + 1) = *(int *)(pppppplVar6 + 1) + 1;
    UNLOCK();
  }
  return unaff_RDI;
}


