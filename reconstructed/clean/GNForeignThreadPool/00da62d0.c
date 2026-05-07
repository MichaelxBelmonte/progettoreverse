// Function: FUN_00da62d0
// Address: 00da62d0
// Size: 1010 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


void* FUN_00da62d0(double param_1,int64_t *param_2,sched_param *param_3,uint64_t param_4)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  pthread_t p_Var4;
  int iVar5;
  pthread_attr_t *in_RCX;
  pthread_t info;
  uint64_t uVar7;
  uint64_t arg1;
  void*this_ptr;
  mach_msg_type_number_t policy_infoCnt;
  uint32_t uVar8;
  int64_t lVar9;
  int iVar10;
  uint32_t local_c8;
  uint local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  uint local_b8;
  uint local_b4;
  pthread_t local_b0;
  char local_a8;
  uint64_t local_a0;
  char *local_98;
  double local_90;
  int local_88 [3];
  uint32_t local_7c;
  int64_t local_38;
  pthread_attr_t *ppVar6;
  
  uVar8 = (uint32_t)((uint64_t)param_4 >> 0x20);
  policy_infoCnt = (mach_msg_type_number_t)param_4;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  ppVar6 = in_RCX;
  local_90 = param_1;
  p_Var4 = (pthread_t)FUN_00e8fc40();
  FUN_00d4ff40();
  *(pthread_t *)p_Var4 = (pthread_t)&g_02579948;
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
  *(void*)(p_Var4->__opaque + 0x10) = arg1;
  lVar1 = *param_2;
  lVar9 = *(int64_t *)(p_Var4->__opaque + 0x18);
  if (lVar9 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(p_Var4->__opaque + 0x18) = lVar1;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  iVar10 = (int)in_RCX;
  *(int *)(p_Var4->__opaque + 0x20) = iVar10;
  p_Var4->__opaque[9] = '\x01';
  local_98 = p_Var4->__opaque + 0x48;
  FUN_00e8f710();
  lVar1 = g_028a8630;
  if (((iVar10 == 4) && (g_028a8630 != 0)) && (7 < *(int *)(g_028a8630 + 0x18))) {
    lVar9 = 0;
    do {
      local_a8 = '\0';
      local_b0 = p_Var4;
      (**(code **)(*(int64_t *)(lVar1 + 0x10) + lVar9 * 8))();
      if ((local_a8 != '\0') && (local_b0 != (pthread_t)0x0)) {
        FUN_00d50b20();
      }
      iVar3 = *(int *)(lVar1 + 0x18);
      iVar5 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      ppVar6 = (pthread_attr_t *)(uint64_t)(uint)(iVar5 >> 3);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < iVar5 >> 3);
  }
  (**(code **)(*g_02802568 + 0x368))();
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
  *(void*)p_Var4->__opaque = local_a0;
  iVar3 = _pthread_getschedparam(info,local_88,param_3);
  if ((iVar3 != 0) || (iVar10 == 0)) goto LAB_00da6645;
  if (3 < iVar10 - 1U) goto switchD_00da64fb_default;
  info = (pthread_t)
         ((int64_t)&switchD_00da64fb::switchdataD_00da6730 +
         (int64_t)(int)(&switchD_00da64fb::switchdataD_00da6730)[iVar10 - 1U]);
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
  if ((local_90 != g_02391038) || (NAN(local_90) || NAN(g_02391038))) {
    if (((*(double *)(p_Var4->__opaque + 0x28) != local_90) ||
        (NAN(*(double *)(p_Var4->__opaque + 0x28)) || NAN(local_90))) &&
       (*(double *)(p_Var4->__opaque + 0x28) = local_90, *(int *)(p_Var4->__opaque + 0x20) == 4)) {
      _mach_timebase_info((mach_timebase_info_t)info);
      local_98 = *(char **)(p_Var4->__opaque + 0x28);
      _pthread_mach_thread_np(info);
      uVar7 = (uint64_t)
              ((((double)local_b4 * g_024110e0) / (double)local_b8) *
              (double)local_98 * g_023907c0);
      local_c8 = (uint32_t)uVar7;
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
  FUN_00dee5a0((int)g_023908c8);
LAB_00da666c:
  bVar2 = false;
LAB_00da666e:
  (**(code **)(*g_02802568 + 0x378))();
  *(void*)(this_ptr + 1) = 0;
  if ((bVar2) && (p_Var4 != (pthread_t)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = p_Var4;
  *(void*)(this_ptr + 1) = 1;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return this_ptr;
  }
                      ___stack_chk_fail();
}

