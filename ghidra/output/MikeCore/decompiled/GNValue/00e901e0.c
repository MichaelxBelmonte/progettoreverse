// Function: FUN_00e901e0
// Address: 00e901e0
// Size: 947 bytes
// Class: GNValue


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00e901e0(uint param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  memory_object_offset_t unaff_RSI;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  mem_entry_name_port_t in_stack_ffffffffffffffa0;
  undefined8 uVar11;
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
               unaff_RSI,(boolean_t)puVar12,param_1,in_stack_ffffffffffffffc0,0);
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
    plVar2 = *(longlong **)(puVar6 + 2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *(ushort *)(param_2 + 3);
      uVar7 = 0;
      if (1 < uVar1) {
        do {
          uVar5 = (int)uVar7 + 1;
          *(uint *)((longlong)plVar2 +
                   (ulonglong)(byte)(&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] * 0x10 +
                   uVar7 * (&DAT_028026d8)[(longlong)(int)puVar6[1] * 7] + 0x10) = uVar5;
          uVar7 = (ulonglong)(uVar5 & 0xffff);
        } while ((int)(uVar5 & 0xffff) < (int)(uVar1 - 1));
        uVar7 = (ulonglong)(uVar5 & 0xffff);
      }
      *(undefined4 *)
       ((longlong)plVar2 +
       (ulonglong)(byte)(&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] * 0x10 +
       uVar7 * (&DAT_028026d8)[(longlong)(int)puVar6[1] * 7] + 0x10) = 0x7fff;
      if (*(char *)((longlong)param_2 + 0x1c) != '\0') {
        *plVar2 = (longlong)puVar6;
      }
    }
    uVar11 = FUN_00e313b0();
    *(undefined8 *)(puVar6 + 4) = uVar11;
    cVar4 = FUN_00e31450(3,puVar6);
    while (cVar4 == '\0') {
      *(undefined8 *)(puVar6 + 4) = uVar11;
      cVar4 = FUN_00e31450(3,puVar6);
    }
  }
joined_r0x00e904a3:
  do {
    if ((in_stack_ffffffffffffffc0 & 0xfffe) == 0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_00e9051c;
    }
    lVar3 = *(longlong *)(puVar6 + 2);
    lVar8 = (ulonglong)(byte)(&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] * 0x10 +
            (ulonglong)(in_stack_ffffffffffffffc0 >> 0x11) *
            (&DAT_028026d8)[(longlong)(int)puVar6[1] * 7];
    uVar5 = in_stack_ffffffffffffffc0 + 0xfffe & 0xfffe;
    cVar4 = FUN_00e314a0(0,in_stack_ffffffffffffffc0 & 0x10000 |
                           *(int *)(lVar3 + 0x10 + lVar8) << 0x11 | uVar5);
  } while (cVar4 == '\0');
  puVar10 = (undefined8 *)(lVar8 + lVar3);
  puVar9 = puVar10 + 2;
  if ((&DAT_028026ec)[(longlong)(int)puVar6[1] * 0x38] == '\0') {
    *puVar10 = puVar6;
    puVar10[1] = unaff_RSI + 0x10;
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


