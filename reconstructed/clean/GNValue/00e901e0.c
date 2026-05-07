// Function: FUN_00e901e0
// Address: 00e901e0
// Size: 947 bytes
// Class: GNValue

void* FUN_00e901e0(uint param_1,int64_t *param_2)

{
  ushort uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  uint64_t uVar7;
  memory_object_offset_t arg1;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  mem_entry_name_port_t in_stack_ffffffffffffffa0;
  uint64_t uVar11;
  uint *puVar12;
  uint in_stack_ffffffffffffffc0;
  
  puVar6 = (uint *)param_2[6];
  puVar12 = puVar6;
  if (puVar6 == (uint *)0x0) {
LAB_00e90268:
    for (puVar6 = (uint *)*param_2; puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
      uVar11 = 0xe9028a;
      uVar5 = FUN_00e31390();
      in_stack_ffffffffffffffa0 = (mem_entry_name_port_t)uVar11;
      do {
        if (((uVar5 & 1) != 0) ||
           (in_stack_ffffffffffffffa0 = (mem_entry_name_port_t)uVar11, (uVar5 & 0xfffe) == 0)) {
          in_stack_ffffffffffffffc0 = uVar5 & 0xfffffffe;
          break;
        }
        in_stack_ffffffffffffffc0 = uVar5 | 1;
        uVar11 = 0xe902bd;
        cVar4 = FUN_00e314a0(1,in_stack_ffffffffffffffc0);
        in_stack_ffffffffffffffa0 = (mem_entry_name_port_t)uVar11;
      } while (cVar4 == '\0');
      if ((in_stack_ffffffffffffffc0 & 1) != 0) goto LAB_00e902df;
    }
  }
  else {
    in_stack_ffffffffffffffa0 = 0xe90215;
    uVar5 = FUN_00e31390();
    do {
      if (((uVar5 & 1) != 0) || ((uVar5 & 0xfffe) == 0)) {
        in_stack_ffffffffffffffc0 = uVar5 & 0xfffffffe;
        break;
      }
      in_stack_ffffffffffffffc0 = uVar5 | 1;
      in_stack_ffffffffffffffa0 = 0xe90245;
      cVar4 = FUN_00e314a0(1,in_stack_ffffffffffffffc0);
    } while (cVar4 == '\0');
    if ((in_stack_ffffffffffffffc0 & 1) == 0) goto LAB_00e90268;
LAB_00e902df:
    if (puVar6 != (uint *)0x0) goto joined_r0x00e904a3;
  }
  _mach_vm_map(0xffff,(mach_vm_address_t *)0x10000,0xfa000001,0,1,in_stack_ffffffffffffffa0,
               arg1,(boolean_t)puVar12,param_1,in_stack_ffffffffffffffc0,0);
  FUN_00e8f250();
  puVar6 = (uint *)FUN_00e91940(&stack0xffffffffffffffc0);
  if (puVar6 == (uint *)0x0) {
    puVar6 = (uint *)FUN_00e912b0();
    puVar6[1] = param_1;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    uVar5 = FUN_00e31390();
    in_stack_ffffffffffffffc0 = (uVar5 & 0x10000) + (*(uint *)(param_2 + 3) & 0x7fff) * 2 + 1;
    *puVar6 = in_stack_ffffffffffffffc0;
    plVar2 = *(int64_t **)(puVar6 + 2);
    if (plVar2 != (int64_t *)0x0) {
      uVar1 = *(ushort *)(param_2 + 3);
      uVar7 = 0;
      if (1 < uVar1) {
        do {
          uVar5 = (int)uVar7 + 1;
          *(uint *)((int64_t)plVar2 +
                   (uint64_t)(byte)(&g_028026ec)[(int64_t)(int)puVar6[1] * 0x38] * 0x10 +
                   uVar7 * (&g_028026d8)[(int64_t)(int)puVar6[1] * 7] + 0x10) = uVar5;
          uVar7 = (uint64_t)(uVar5 & 0xffff);
        } while ((int)(uVar5 & 0xffff) < (int)(uVar1 - 1));
        uVar7 = (uint64_t)(uVar5 & 0xffff);
      }
      *(void*)
       ((int64_t)plVar2 +
       (uint64_t)(byte)(&g_028026ec)[(int64_t)(int)puVar6[1] * 0x38] * 0x10 +
       uVar7 * (&g_028026d8)[(int64_t)(int)puVar6[1] * 7] + 0x10) = 0x7fff;
      if (*(char *)((int64_t)param_2 + 0x1c) != '\0') {
        *plVar2 = (int64_t)puVar6;
      }
    }
    uVar11 = FUN_00e313b0();
    *(void*)(puVar6 + 4) = uVar11;
    cVar4 = FUN_00e31450(3,puVar6);
    while (cVar4 == '\0') {
      *(void*)(puVar6 + 4) = uVar11;
      cVar4 = FUN_00e31450(3,puVar6);
    }
  }
joined_r0x00e904a3:
  do {
    if ((in_stack_ffffffffffffffc0 & 0xfffe) == 0) {
      puVar9 = (void*)0x0;
      goto LAB_00e9051c;
    }
    lVar3 = *(int64_t *)(puVar6 + 2);
    lVar8 = (uint64_t)(byte)(&g_028026ec)[(int64_t)(int)puVar6[1] * 0x38] * 0x10 +
            (uint64_t)(in_stack_ffffffffffffffc0 >> 0x11) *
            (&g_028026d8)[(int64_t)(int)puVar6[1] * 7];
    uVar5 = in_stack_ffffffffffffffc0 + 0xfffe & 0xfffe;
    cVar4 = FUN_00e314a0(0,in_stack_ffffffffffffffc0 & 0x10000 |
                           *(int *)(lVar3 + 0x10 + lVar8) << 0x11 | uVar5);
  } while (cVar4 == '\0');
  puVar10 = (void*)(lVar8 + lVar3);
  puVar9 = puVar10 + 2;
  if ((&g_028026ec)[(int64_t)(int)puVar6[1] * 0x38] == '\0') {
    *puVar10 = puVar6;
    puVar10[1] = arg1 + 0x10;
  }
  FUN_00e314f0();
  if (uVar5 == 0) {
LAB_00e9051c:
    if (puVar12 == (uint *)0x0) {
      return puVar9;
    }
    puVar6 = (uint *)0x0;
  }
  else if (puVar12 == puVar6) {
    return puVar9;
  }
  FUN_00e31450(0,puVar6);
  return puVar9;
}

