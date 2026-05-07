// Function: FUN_01935e40
// Address: 01935e40
// Size: 1068 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0193622f) */
/* WARNING: Removing unreachable block (ram,0x0193623c) */
/* WARNING: Removing unreachable block (ram,0x01935eec) */
/* WARNING: Removing unreachable block (ram,0x01935ef5) */
/* WARNING: Removing unreachable block (ram,0x01935f2e) */
/* WARNING: Removing unreachable block (ram,0x01935f37) */

undefined8 * FUN_01935e40(double param_1,double param_2)

{
  longlong *plVar1;
  bool bVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  code *pcVar7;
  longlong unaff_RSI;
  longlong *plVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  longlong local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  undefined8 *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x538) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013293b0();
  if (local_68 == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_01935efa;
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
LAB_01935efa:
    if (*(int *)((longlong)local_70 + 0xc) == 0) {
      bVar2 = false;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_019363e0();
      if (local_70 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        puVar6 = local_70;
        if (local_68 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    pcVar3 = DAT_02572370;
    if (0 < *(int *)((longlong)local_70 + 0xc)) {
      lVar9 = 0;
      pcVar7 = DAT_02572370;
      do {
        plVar1 = *(longlong **)(local_70[2] + lVar9 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
        plVar8 = plVar1;
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar8 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar8 + 0x378))();
        if (local_40 == (longlong *)0x0) {
          bVar10 = true;
        }
        else {
          pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
          plVar8 = plVar1;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x378))();
          pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          bVar10 = local_b8 == 0;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar10) {
          pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar11 = (double)FUN_014bb3e0();
          if (dVar11 <= param_2 + param_1) {
            pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar11 = (double)FUN_014bb4b0();
            if (param_1 <= dVar11) {
              if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar6 = &DAT_02572358;
                (*pcVar3)();
                bVar2 = true;
              }
              local_38 = '\0';
              FUN_00d21140();
              local_40 = plVar1;
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)((longlong)local_70 + 0xc));
    }
    FUN_0131c810();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar2) {
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return unaff_RDI;
  }
  *unaff_RDI = 0;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


