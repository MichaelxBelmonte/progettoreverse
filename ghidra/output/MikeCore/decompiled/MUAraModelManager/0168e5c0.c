// Function: FUN_0168e5c0
// Address: 0168e5c0
// Size: 598 bytes
// Class: MUAraModelManager
// String references:
//   "false && \"changing playback regions for playback renderers requires setActive(false)\""
//   "false && \"changing playback regions for playback renderers requires uninitialize()\""
//   "false && \"changing playback regions for playback renderers requires -deallocateRenderResources\""
//   "false && \"changing playback regions for playback renderers requires temporarily disabling renderin...
//   "plugInWrapper->_isPlaybackRenderer"
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "!plugInWrapper->getPlaybackRegionsForPlayback()->containsObjectIdenticalTo(playbackRegion)"
//   "provided object ref is invalid"
//   "call required from document main thread"


/* WARNING: Removing unreachable block (ram,0x0168e794) */
/* WARNING: Removing unreachable block (ram,0x0168e79d) */

void FUN_0168e5c0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  
  FUN_00da7190();
  if ((unaff_RDI == (longlong *)0x0) || (unaff_RDI[5] == 0)) {
    FUN_016aea20();
    goto LAB_0168e7fe;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    FUN_016aea20();
  }
  else if (*(char *)((longlong)unaff_RDI + 0xa5) == '\0') {
    FUN_016aea20();
  }
  else {
    cVar2 = (**(code **)(*unaff_RDI + 0x4c8))();
    if (cVar2 != '\0') {
      uVar4 = FUN_00bd1920();
      param_1 = 0x168e8c0;
      switch(uVar4) {
      case 0xb:
        break;
      case 0xc:
        break;
      default:
        break;
      case 0xf:
        goto switchD_0168e649_caseD_f;
      case 0x10:
      }
      param_1 = 0x168e8c0;
      FUN_016aea20();
    }
switchD_0168e649_caseD_f:
    if ((unaff_RSI == 0) || (cVar3 = FUN_01658870(), cVar3 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      lVar1 = unaff_RDI[0x13];
      if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffb8 == lVar1) {
        lVar1 = unaff_RDI[0x15];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d24090();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_0168e920();
          if (cVar2 != '\0') {
            (**(code **)(*unaff_RDI + 0x4d0))();
          }
        }
        else {
          FUN_016aea20();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0168e7fe:
  FUN_00da71b0();
  return;
}


