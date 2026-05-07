// Function: FUN_0173fdf0
// Address: 0173fdf0
// Size: 954 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


float FUN_0173fdf0(float param_1,float param_2,float param_3,void* param_4)

{
  uint uVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void* in_ECX;
  void* pVar7;
  char in_DL;
  char unaff_SIL;
  uint uVar8;
  int64_t *this_ptr;
  int64_t *in_R8;
  uint32_t extraout_XMM0_Da;
  float fVar9;
  uint32_t extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int *local_res8;
  float local_98;
  int64_t local_80;
  char local_78;
  char local_70;
  float local_68;
  int64_t local_48;
  char local_40;
  void* local_34;
  
  pVar7 = in_ECX;
  if (param_4 == 0xfff0bdc0) {
    param_2 = (float)FUN_0173fd40(param_1);
  }
  if (local_res8 != (int *)0x0) {
    *local_res8 = 0;
  }
  uVar3 = (**(code **)(*this_ptr + 0x3a8))(param_1);
  fVar9 = (float)FUN_01740240(extraout_XMM0_Da,uVar3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    fVar9 = (float)FUN_00d50b20();
  }
  if (local_48 == 0) {
    return param_1;
  }
  if ((in_DL != '\0') && (unaff_SIL == '\0')) {
    (**(code **)(*this_ptr + 0x3a8))(param_1);
    local_68 = (float)(**(code **)(*this_ptr + 0x3a0))();
    if (local_res8 == (int *)0x0) {
      return local_68;
    }
    local_34 = (**(code **)(*this_ptr + 0x370))();
    goto LAB_01740191;
  }
  local_98 = param_2;
  local_34 = param_4;
  if (unaff_SIL != '\0') {
    iVar4 = (**(code **)(*this_ptr + 0x378))();
    if (iVar4 == -1000000) {
LAB_0173ffb6:
      if ((*in_R8 == 0) || (g_0239011c - param_3 <= (float)(g_02390140 & (uint)param_2))) {
LAB_017400ee:
        (**(code **)(*this_ptr + 0x3b0))(param_1);
        local_34 = (**(code **)(*this_ptr + 0x370))();
      }
      else {
        iVar4 = ((uint)((int)param_4 / 6 + ((int)param_4 >> 0x1f)) >> 1) - ((int)param_4 >> 0x1f);
        uVar8 = param_4 + iVar4 * -0xc;
        uVar1 = param_4 + 0xc + iVar4 * -0xc;
        if (-1 < (int)uVar8) {
          uVar1 = uVar8;
        }
        iVar4 = *(int *)(*(int64_t *)(*in_R8 + 0x10) + (uint64_t)uVar1 * 4);
        if ((iVar4 == -1000000) ||
           (pVar7 = param_4, iVar5 = (**(code **)(*this_ptr + 0x378))(), iVar5 == -1000000))
        goto LAB_017400ee;
        uVar3 = FUN_01740240(extraout_XMM0_Da_02,iVar5);
        if (local_48 == 0) {
          cVar2 = '\0';
        }
        else {
          FUN_01740240(uVar3,iVar5);
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01739620();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') goto LAB_017400ee;
        local_34 = iVar4 + param_4;
      }
      local_70 = (char)in_ECX;
      fVar9 = param_2;
      local_98 = param_2;
      if (local_70 != '\0') {
        fVar9 = (float)((uint)param_2 ^ g_023945e0);
        local_98 = fVar9;
      }
    }
    else {
      fVar9 = (float)FUN_01740240(extraout_XMM0_Da_00,iVar4);
      if ((local_40 != '\0') && (local_48 != 0)) {
        fVar9 = (float)FUN_00d50b20();
      }
      local_98 = param_2;
      if (local_48 != 0) {
        FUN_01740240(fVar9,iVar4);
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01739620();
        fVar9 = extraout_XMM0_Da_01;
        if ((local_40 != '\0') && (local_48 != 0)) {
          fVar9 = (float)FUN_00d50b20();
        }
        local_98 = param_2;
        if (cVar2 == '\0') goto LAB_0173ffb6;
      }
    }
  }
  local_68 = (float)FUN_0173fbe0(fVar9,0);
  if (in_DL == '\0') {
    fVar9 = (float)FUN_0173fbe0(0,local_98);
    local_68 = local_68 + (float)((uint)(fVar9 - local_68) & g_02390140) * local_98;
  }
  if (local_res8 == (int *)0x0) {
    return local_68;
  }
LAB_01740191:
  *local_res8 = local_34 - param_4;
  return local_68;
}

