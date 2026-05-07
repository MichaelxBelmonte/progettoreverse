// Function: FUN_014d5e20
// Address: 014d5e20
// Size: 670 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x014d6085) */
/* WARNING: Removing unreachable block (ram,0x014d6092) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014d5e20(float param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int in_ECX;
  undefined *puVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  fVar12 = (float)(**(code **)(*unaff_RSI + 0x3e0))();
  lVar4 = (**(code **)(*unaff_RSI + 0x380))();
  lVar5 = FUN_014bb590();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar9 = 0;
      do {
        plVar11 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar9 * 8);
        if ((plVar11 != (longlong *)0x0) && (plVar11 != unaff_RSI)) {
          pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
          plVar10 = plVar11;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar10 + 1000))();
          if (cVar2 != '\0') {
            pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
              plVar10 = plVar11;
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
              if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < param_1) {
                pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                lVar7 = (**(code **)(*plVar11 + 0x380))();
                if (lVar7 < lVar5 + in_ECX) {
                  pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar7 = FUN_014bb590();
                  if (lVar4 - in_ECX < lVar7) {
                    FUN_00d21140();
                  }
                }
              }
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c810();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


