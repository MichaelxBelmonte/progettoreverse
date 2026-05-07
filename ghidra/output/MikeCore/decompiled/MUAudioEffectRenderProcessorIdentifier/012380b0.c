// Function: FUN_012380b0
// Address: 012380b0
// Size: 1377 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


/* WARNING: Removing unreachable block (ram,0x01238389) */
/* WARNING: Removing unreachable block (ram,0x01238395) */
/* WARNING: Removing unreachable block (ram,0x01238336) */
/* WARNING: Removing unreachable block (ram,0x01238342) */
/* WARNING: Removing unreachable block (ram,0x01238221) */
/* WARNING: Removing unreachable block (ram,0x0123822d) */
/* WARNING: Removing unreachable block (ram,0x0123825d) */
/* WARNING: Removing unreachable block (ram,0x0123826e) */
/* WARNING: Removing unreachable block (ram,0x01238350) */
/* WARNING: Removing unreachable block (ram,0x0123835c) */
/* WARNING: Removing unreachable block (ram,0x012384af) */
/* WARNING: Removing unreachable block (ram,0x012384b8) */

void FUN_012380b0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong *local_58;
  longlong *local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) goto LAB_0123860e;
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x5c0))();
  plVar1 = local_40;
  local_50 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0123811e;
    }
LAB_01238180:
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x370))();
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_01238180;
LAB_0123811e:
    FUN_00d50b00();
    FUN_012364a0();
    plVar2 = local_40;
    if (plVar1 == local_40) {
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar2;
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_50 = plVar2;
    }
    FUN_00d50b20();
    (**(code **)(*DAT_028ac258 + 0x368))();
    FUN_01237080();
    plVar1 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if (plVar1 == (longlong *)0x0) {
      FUN_01238a00();
      local_58 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_58 = plVar1;
      }
      else if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
              (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01238aa0();
      FUN_00d21140();
    }
    else {
      FUN_00d24140();
      local_58 = plVar1;
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x388))();
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = plVar1;
    FUN_00e323f0();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (0x1e0 < *(int *)(DAT_028ac248 + 0xc)) {
LAB_01238434:
      FUN_00d23310();
      plVar1 = local_40;
      local_48[0] = local_38[0];
      pcVar4 = local_38;
      if (local_38[0] == '\0') {
        pcVar4 = local_48;
      }
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] == '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01237080();
      plVar2 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      do {
        FUN_01237130();
        plVar3 = local_40;
        if (local_38[0] == '\0') {
          if (local_40 == (longlong *)0x0) goto LAB_01238530;
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_40 == (longlong *)0x0) goto LAB_01238530;
        (**(code **)(*plVar3 + 0x370))();
        FUN_00d50b20();
      } while( true );
    }
LAB_012385c2:
    (**(code **)(*DAT_028ac258 + 0x378))();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xf8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xf8) = 0;
    FUN_00d50b20();
  }
LAB_0123860e:
  FUN_00b342a0();
  return;
LAB_01238530:
  local_38[0] = '\0';
  local_40 = plVar1;
  FUN_00e383c0();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23620();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (*(int *)(DAT_028ac248 + 0xc) < 0x1e1) goto LAB_012385c2;
  goto LAB_01238434;
}


