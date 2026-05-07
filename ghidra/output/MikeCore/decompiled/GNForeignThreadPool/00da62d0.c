// Function: FUN_00da62d0
// Address: 00da62d0
// Size: 1010 bytes
// Class: GNForeignThreadPool


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00da62d0(double param_1,longlong *param_2,sched_param *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  pthread_t p_Var4;
  int iVar5;
  pthread_attr_t *in_RCX;
  pthread_t info;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  undefined8 *unaff_RDI;
  mach_msg_type_number_t policy_infoCnt;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  pthread_t local_b0;
  char local_a8;
  undefined8 local_a0;
  char *local_98;
  double local_90;
  int local_88 [3];
  undefined4 local_7c;
  longlong local_38;
  pthread_attr_t *ppVar6;
  
  uVar8 = (undefined4)((ulonglong)param_4 >> 0x20);
  policy_infoCnt = (mach_msg_type_number_t)param_4;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  ppVar6 = in_RCX;
  local_90 = param_1;
  p_Var4 = (pthread_t)FUN_00e8fc40();
  FUN_00d4ff40();
  *(pthread_t *)p_Var4 = (pthread_t)&DAT_02579948;
  p_Var4->__opaque[8] = '\0';
  p_Var4->__opaque[9] = '\0';
  p_Var4->__opaque[0x18] = '\0';
  p_Var4->__opaque[0x19] = '\0';
  p_Var4->__opaque[0x1a] = '\0';
  p_Var4->__opaque[0x1b] = '\0';
  p_Var4->__opaque[0x1c] = '\0';
  p_Var4->__opaque[0x1d] = '\0';
  p_Var4->__opaque[0x1e] = '\0';
  p_Var4->__opaque[0x1f] = '\0';
  p_Var4->__opaque[0x20] = '\0';
  p_Var4->__opaque[0x21] = '\0';
  p_Var4->__opaque[0x22] = '\0';
  p_Var4->__opaque[0x23] = '\0';
  p_Var4->__opaque[0x28] = '\0';
  p_Var4->__opaque[0x29] = '\0';
  p_Var4->__opaque[0x2a] = '\0';
  p_Var4->__opaque[0x2b] = '\0';
  p_Var4->__opaque[0x2c] = '\0';
  p_Var4->__opaque[0x2d] = '\0';
  p_Var4->__opaque[0x2e] = '\0';
  p_Var4->__opaque[0x2f] = '\0';
  p_Var4->__opaque[0x30] = '\0';
  p_Var4->__opaque[0x31] = '\0';
  p_Var4->__opaque[0x32] = '\0';
  p_Var4->__opaque[0x33] = '\0';
  p_Var4->__opaque[0x34] = '\0';
  p_Var4->__opaque[0x35] = '\0';
  p_Var4->__opaque[0x36] = '\0';
  p_Var4->__opaque[0x37] = '\0';
  p_Var4->__opaque[0x38] = '\0';
  p_Var4->__opaque[0x39] = '\0';
  p_Var4->__opaque[0x3a] = '\0';
  p_Var4->__opaque[0x3b] = '\0';
  p_Var4->__opaque[0x3c] = '\0';
  p_Var4->__opaque[0x3d] = '\0';
  p_Var4->__opaque[0x3e] = '\0';
  p_Var4->__opaque[0x3f] = '\0';
  p_Var4->__opaque[0x40] = '\0';
  p_Var4->__opaque[0x41] = '\0';
  p_Var4->__opaque[0x42] = '\0';
  p_Var4->__opaque[0x43] = '\0';
  p_Var4->__opaque[0x44] = '\0';
  p_Var4->__opaque[0x45] = '\0';
  p_Var4->__opaque[0x46] = '\0';
  p_Var4->__opaque[0x47] = '\0';
  p_Var4->__opaque[0x50] = '\0';
  p_Var4->__opaque[0x51] = '\0';
  p_Var4->__opaque[0x52] = '\0';
  p_Var4->__opaque[0x53] = '\0';
  p_Var4->__opaque[0x54] = '\0';
  p_Var4->__opaque[0x55] = '\0';
  p_Var4->__opaque[0x56] = '\0';
  p_Var4->__opaque[0x57] = '\0';
  p_Var4->__opaque[0x58] = '\0';
  p_Var4->__opaque[0x59] = '\0';
  p_Var4->__opaque[0x5a] = '\0';
  p_Var4->__opaque[0x5b] = '\0';
  p_Var4->__opaque[0x5c] = '\0';
  p_Var4->__opaque[0x5d] = '\0';
  p_Var4->__opaque[0x5e] = '\0';
  p_Var4->__opaque[0x5f] = '\0';
  p_Var4->__opaque[0x60] = '\0';
  p_Var4->__opaque[0x61] = '\0';
  p_Var4->__opaque[0x62] = '\0';
  p_Var4->__opaque[99] = '\0';
  FUN_00d500e0();
  *(undefined8 *)(p_Var4->__opaque + 0x10) = unaff_RSI;
  lVar1 = *param_2;
  lVar9 = *(longlong *)(p_Var4->__opaque + 0x18);
  if (lVar9 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(p_Var4->__opaque + 0x18) = lVar1;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  iVar10 = (int)in_RCX;
  *(int *)(p_Var4->__opaque + 0x20) = iVar10;
  p_Var4->__opaque[9] = '\x01';
  local_98 = p_Var4->__opaque + 0x48;
  FUN_00e8f710();
  lVar1 = DAT_028a8630;
  if (((iVar10 == 4) && (DAT_028a8630 != 0)) && (7 < *(int *)(DAT_028a8630 + 0x18))) {
    lVar9 = 0;
    do {
      local_a8 = '\0';
      local_b0 = p_Var4;
      (**(code **)(*(longlong *)(lVar1 + 0x10) + lVar9 * 8))();
      if ((local_a8 != '\0') && (local_b0 != (pthread_t)0x0)) {
        FUN_00d50b20();
      }
      iVar3 = *(int *)(lVar1 + 0x18);
      iVar5 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      ppVar6 = (pthread_attr_t *)(ulonglong)(uint)(iVar5 >> 3);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < iVar5 >> 3);
  }
  (**(code **)(*DAT_02802568 + 0x368))();
  _pthread_attr_init(ppVar6);
  _pthread_attr_set_qos_class_np();
  info = p_Var4;
  iVar3 = _pthread_create_suspended_np
                    ((pthread_t *)p_Var4,(pthread_attr_t *)FUN_00da5c40,(void **)param_3,
                     (void *)CONCAT44(uVar8,policy_infoCnt));
  if (iVar3 != 0) {
    FUN_00e8f7d0();
    if (p_Var4 != (pthread_t)0x0) {
      bVar2 = true;
      p_Var4 = (pthread_t)0x0;
      FUN_00d50b20();
      goto LAB_00da666e;
    }
    goto LAB_00da666c;
  }
  *(undefined8 *)p_Var4->__opaque = local_a0;
  iVar3 = _pthread_getschedparam(info,local_88,param_3);
  if ((iVar3 != 0) || (iVar10 == 0)) goto LAB_00da6645;
  if (3 < iVar10 - 1U) goto switchD_00da64fb_default;
  info = (pthread_t)
         ((longlong)&switchD_00da64fb::switchdataD_00da6730 +
         (longlong)(int)(&switchD_00da64fb::switchdataD_00da6730)[iVar10 - 1U]);
  switch(iVar10) {
  case 1:
    local_7c = 1;
    local_88[0] = 0xf;
    break;
  case 2:
    local_7c = 1;
    local_88[0] = 0x1f;
    break;
  case 3:
    local_88[0] = 0x23;
    goto LAB_00da654a;
  case 4:
    local_88[0] = 0x3f;
LAB_00da654a:
    local_7c = 2;
  }
switchD_00da64fb_default:
  _pthread_setschedparam(info,(int)local_88,param_3);
  if ((local_90 != _DAT_02391038) || (NAN(local_90) || NAN(_DAT_02391038))) {
    if (((*(double *)(p_Var4->__opaque + 0x28) != local_90) ||
        (NAN(*(double *)(p_Var4->__opaque + 0x28)) || NAN(local_90))) &&
       (*(double *)(p_Var4->__opaque + 0x28) = local_90, *(int *)(p_Var4->__opaque + 0x20) == 4)) {
      _mach_timebase_info((mach_timebase_info_t)info);
      local_98 = *(char **)(p_Var4->__opaque + 0x28);
      _pthread_mach_thread_np(info);
      uVar7 = (ulonglong)
              ((((double)local_b4 * DAT_024110e0) / (double)local_b8) *
              (double)local_98 * DAT_023907c0);
      local_c8 = (undefined4)uVar7;
      local_c4 = (uint)(uVar7 >> 1) & 0x7fffffff;
      local_bc = 1;
      info = (pthread_t)&MACH_HEADER.cputype;
      local_c0 = local_c8;
      _thread_policy_set(4,(thread_policy_flavor_t)&local_c8,&param_3->sched_priority,policy_infoCnt
                        );
    }
  }
LAB_00da6645:
  _pthread_mach_thread_np(info);
  _thread_resume((thread_act_t)info);
  FUN_00dee5a0((int)DAT_023908c8);
LAB_00da666c:
  bVar2 = false;
LAB_00da666e:
  (**(code **)(*DAT_02802568 + 0x378))();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((bVar2) && (p_Var4 != (pthread_t)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = p_Var4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return unaff_RDI;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


